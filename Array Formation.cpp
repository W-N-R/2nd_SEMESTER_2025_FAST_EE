#include<iostream>
using namespace std;
void printArray(float parr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << endl;
		cout << parr[i] << " ";
	}
}
void getArray(float parr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter the value of element " << i << " : ";
		cin >> parr[i];
	}
}
void average(float parr[], int size) {
	float sum = 0;
	cout << endl;
	for (int i = 0; i < size; i++) {
		sum += parr[i];
	}
	cout << "The average of the array is : " << sum / size << endl;
}
int main() {
	
	float arr[5];
	getArray(arr, 5);

	cout << "so the array is :";
	printArray(arr, 5);
	average(arr, 5);
	return 0;
}