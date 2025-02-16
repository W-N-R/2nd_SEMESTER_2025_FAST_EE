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
	cin >> size;
	int* ptr = new int [size];

	srand(time(0));
	
	for (int i = 0; i < size;i++) {

		int random_num = rand() % 201 - 100;


		do {

			ptr[i] = random_num;

		} while (*ptr == 0);
	}

	for (int i = 0; i < size;i++) {

		cout << ptr[i]<<endl;

	}
	cout << "Sorted Array" << endl;
	Display_positive(ptr, size);
	cout << "Negative numbers" << endl;
	
	Display_Negative(ptr, size);
	delete[] ptr;
	return 0;


}