#pragma once
#include <iostream>
#include <initializer_list>

using namespace std;
/*
* ������� ���� Array (��� �������������� ����� ��������� ����).
���� Array � �� ���� ���������� ������.
����� ������ ���� ���� ��������� �� �������� ��� ������� �� ��������� ������� �������-�����.
���� ������� ��������� ����������� ����� ����������, ���������� ���� ������, �������� ����� ������, ��������� �����, ��������� �������� � ����������� ��������.
���� ������� ������ ���� ������������, ����������
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

	Array(const Array& obj);

	Array(initializer_list<int> array);

	int getSizeArr();

	void setArr();

	void displayArr();

	void changeSizeArr(int newSize);

	// if 1 = sort to largest, 0 = sort down
	void sortArr(bool isLargest);

	int findMinArr();

	int findMaxArr();

	friend ostream& operator<<(ostream& out, const Array& arr);

	~Array();
};

