#pragma once
#include <iostream>

//Task 1
//show array
template<typename T> void showArr(T arr[], int lenght) {
	std::cout << "[";
	for (int i = 0; i < lenght; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b]" << std::endl;
}

//random number
template<typename T> void randArr(T arr[], int& lenght, int min, int max) {

	for (int i = 0; i < lenght; i++)
		arr[i] = std::rand() % (max - min) + min;
}

//changing the length of an array
template<typename T> T* iSizeArr(T arr[], T arr2[], T arr3[], int& lenght, int& lenght2) {

	T* tmp = new T[lenght + lenght2];
	for (int i = 0; i < lenght; i++)
		tmp[i] = arr[i];
	for (int i = lenght; i < lenght + lenght2; i++)
		tmp[i] = arr2[i - lenght];
	delete[]arr;
	delete[]arr2;

	for (int i = 0; i < lenght + lenght2; i++)
		arr3[i] = tmp[i];
	delete[]tmp;
	return arr3;
}

template<typename T> T* resizeArr(T arr[], int& lenght, int& lenght2) {

	int* tmp = new int[lenght2];
	for (int i = 0; i < lenght2; i++)
		tmp[i] = arr[i];

	for (int i = lenght; i < lenght2; i++) {
		tmp[i] = std::rand() % 101 - 90 + 90;
	}
	arr = new int[lenght2];

	for (int i = 0; i < lenght2; i++) {
		arr[i] = tmp[i];
	}
	delete[]tmp;

	return arr;
}