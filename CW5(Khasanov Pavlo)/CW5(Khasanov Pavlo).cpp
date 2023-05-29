#include "Array.h"


int main()
{
    // check:
    Array arr(10);

    arr.setArr();
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
    cout << arr.findMinArr();


}