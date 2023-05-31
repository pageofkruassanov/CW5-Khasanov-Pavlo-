#include "Array.h"

Array::Array(int sizeArr)
{
	if (sizeArr < 1) {
		sizeArr = 1;
	}
	arr = new int[sizeArr] {};
	this->sizeArr = sizeArr;
}

Array::Array(int* arr, int sizeArr)
{
	this->arr = arr;
	this->sizeArr = sizeArr;
}

Array::Array(const Array& obj)
{
	this->sizeArr = obj.sizeArr;

	this->arr = new int[sizeArr];

	for (int i = 0; i < sizeArr; i++) {
		this->arr[i] = obj.arr[i];
	}
}

int Array::getSizeArr()
{
	return sizeArr;
}

void Array::setArr()
{
	if (sizeArr <= 0) {
		return;
	}
	for (int i = 0; i < sizeArr; i++) {
		cout << "Input " << i + 1 << " element: ";
		cin >> arr[i];
		cout << endl;
	}
}

void Array::displayArr()
{
	if (sizeArr <= 0) {
		return;
	}
	for (int i = 0; i < sizeArr; i++) {
		cout << "Element " << i + 1 << ": ";
		cout << arr[i];
		cout << endl;
	}
}

void Array::changeSizeArr(int newSize)
{
	if (newSize < 1) {
		return;
	}
	int* tempArr = new int[newSize] {};
	delete[] arr;
	arr = tempArr;
	sizeArr = newSize;
}

void Array::sortArr(bool isLargest)
{
	if (sizeArr < 1)
		return;
	if (isLargest) {
		for (int i = 0; i < sizeArr - 1; i++) {
			for (int j = 0; j < sizeArr - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	else {
		for (int i = 0; i < sizeArr - 1; i++) {
			for (int j = 0; j < sizeArr - i - 1; j++) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}

int Array::findMinArr()
{
	if (sizeArr < 1)
		return -1;
	int min = arr[0];
	for (int i = 1; i < sizeArr; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int Array::findMaxArr()
{
	if (sizeArr < 1)
		return -1;
	int max = arr[0];
	for (int i = 1; i < sizeArr; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

Array::~Array()
{
	delete[] arr;
}
