#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	
	int size;
	cin >> size;
	int* ptr = new int(size);
	
	srand(static_cast<unsigned int>(time(nullptr)));
	for (int i = 0; i < size;i++) {
		 ptr[i] = rand();
	}
	for (int i = 0; i < size;i++) {
		cout << ptr[i];
	}

	
	delete[] ptr;
	return 0;


}