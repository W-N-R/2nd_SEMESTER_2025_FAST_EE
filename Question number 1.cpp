#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Display(int** x, int size) {

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

	
	delete[] ptr;
	return 0;


}