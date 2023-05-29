#pragma once
#include <iostream>

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

