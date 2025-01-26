#include<iostream>
using namespace std;
void printArray(float parr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << parr[i] << " "<<endl;
	}
}
void getArray(float parr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the value of element " << i << " : ";
		cin >> parr[i];
	}
}
int main() {

	float arr[5];
	getArray(arr, 5);

	cout << "so the array is :";
	printArray(arr, 5);

	return 0;
}