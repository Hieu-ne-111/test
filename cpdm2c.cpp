#include<iostream>
using namespace std;
int main() {
	int number = 2, size = 2;
	int** array = new int* [number];
	for (int i = 0; i < number; i++) {
		array[i] = new int[size];
	}
	
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < size; j++) {
			array[i][j] = 2;
			cout << array[i][j];
		}
	}

	int new_number = number + 1, new_size = size + 1;
	int** a = new int* [new_number];
	for (int i = 0; i < new_number; i++) {
		a[i] = new int[new_size];
	}
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < size; j++) {
			a[i][j] = array[i][j];
		}
	}
	for (int i = 0; i < new_number; i++) {
		a[i][2] = 3;
		a[2][i] = 3;
	}
	for (int i = 0; i < number; i++) {
		delete[]array[i];

	}
	delete[]array;
	array = a;
	for (int i = 0; i < new_number; i++) {
		cout << endl;
		for (int j = 0; j < new_size; j++) {
			cout << array[i][j]<<" ";
		}
	}
	for (int i = 0; i < number; i++) {
		delete[]a[i];

	}
	delete[]a;

	return 0;
}