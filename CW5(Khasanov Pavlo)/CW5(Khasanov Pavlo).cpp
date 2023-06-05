#include "Array.h"

ostream& operator<<(ostream& out, const Array& arr) {
    for (int i = 0; i < arr.sizeArr; i++) {
        out << arr.arr[i] << endl;
    }
    return out;
}
istream& operator>>(istream& cin, Array& arr) {
    cout << "Input size arr: ";
    cin >> arr.sizeArr;
    if (arr.arr != nullptr) {
        delete[] arr.arr;
    }
    arr.arr = new int[arr.sizeArr];
    cout << endl;
    for (int i = 0; i < arr.sizeArr; i++) {
        cout << "Input " << i + 1 << " element: ";
        cin >> arr.arr[i];
        cout << endl;
    }
    return cin;
}

int main()
{
    // check:
    Array arr({5,6,2,7,8,11});
    Array arr2({ 5,8,9 });

    /*arr.setArr();
    arr.displayArr();
    cout << endl;

    arr.changeSizeArr(5);
    arr.setArr();
    arr.displayArr();
    cout << endl;

    arr.sortArr(1);
    arr.displayArr();
    cout << endl;

    arr.sortArr(0);
    arr.displayArr();
    cout << endl;

    cout << arr.findMaxArr();
    cout << endl;
    cout << arr.findMinArr();*/
    
    /*cout << arr;
    cout << endl;
    bool isArr;
    isArr = arr > arr2;
    cout << isArr << endl;
    isArr = arr < arr2;
    cout << isArr << endl;
    isArr = arr == arr2;
    cout << isArr;*/
    Array arr3;
    cin >> arr3;
    cout << endl;
    arr3.displayArr();

}