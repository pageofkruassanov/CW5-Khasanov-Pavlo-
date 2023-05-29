#pragma once
#include <iostream>

using namespace std;
/*
* Створіть клас Array (або використовуйте раніше створений вами).
Клас Array — це клас динамічного масиву.
Розмір масиву може бути переданий як параметр або заданий за допомогою виклику функції-члена.
Клас повинен дозволяти заповнювати масив значеннями, відображати вміст масиву, змінювати розмір масиву, сортувати масив, визначати мінімальне і максимальне значення.
Клас повинен містити набір конструкторів, деструктор
*/
class Array
{
private:
	int* arr;
	int sizeArr;
public:
	Array() : Array(1) {};

	Array(int sizeArr);

	Array(int* arr, int sizeArr);

	int getSizeArr();

	void setArr();

	void displayArr();

	void changeSizeArr(int newSize);

	// if 1 = sort to largest, 0 = sort down
	void sortArr(bool isLargest);

	int findMinArr();

	int findMaxArr();

	~Array();
};

