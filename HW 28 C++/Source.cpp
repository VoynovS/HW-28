#include <iostream>
#include "Functions.h"


int main() {
	srand(time(NULL));
	//Task 1
	int n, m;
	std::cout << "Enter the lenght of the first array: ";
	std::cin >> n;

	int* A = new int[n];
	std::cout << "The first original array: ";
	randArr(A, n, 10, 101);
	showArr(A, n);

	std::cout << "Enter the lenght of the second array: ";
	std::cin >> m;

	int* B = new int[m];
	std::cout << "The second original array: ";
	randArr(B, m, 15, 25);
	showArr(B, m);

	int* C = new int[n + m];
	std::cout << "The third array: ";
	iSizeArr(A, B, C, n, m);
	showArr(C, n + m);
	delete[] C;


	//Task 2
	int l;
	std::cout << "Enter the lenght of the array: ";
	std::cin >> n;
	int* arr = new int[n];
	randArr(arr, n, 10, 50);
	std::cout << "The original array: ";
	showArr(arr, n);
	std::cout << "Enter new array lenght: ";
	std::cin >> l;
	arr = resizeArr(arr, n, l);
	std::cout << "Array with new lenght: ";
	showArr(arr, l);
	delete[]arr;



	return 0;
}