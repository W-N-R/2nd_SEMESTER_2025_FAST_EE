#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Display_positive(int* x, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (x[i] > 0) {
			count++;
			cout << x[i] << endl;
		}
	}
	cout << "The number of positive numbers in the array is: " << count << endl;
}

void Display_Negative(int* x, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (x[i] < 0) {
			count++;
			cout << x[i] << endl;
		}
	}
	cout << "The number of negative numbers in the array is: " << count << endl;
}

int main()
{
	
	int size;
	cout << "Please enter the number of elements in the main array or size of array: ";
	cin >> size;
	int* ptr = new int [size];

	srand(time(0));
	
	for (int i = 0; i < size;i++) {

		int random_num = rand() % 201 - 100;


		do {

			ptr[i] = random_num;

		} while (*ptr == 0);
	}
	cout << endl;
	cout << "so these are the random numbers" << endl;
	for (int i = 0; i < size;i++) {

		cout << ptr[i]<<endl;

	}


	cout << endl;
	cout << "Sorted Array of positive numbers: " << endl;
	Display_positive(ptr, size);
	cout  << endl;
	cout << "Negative numbers" << endl;
	Display_Negative(ptr, size);
	delete[] ptr;
	return 0;


}