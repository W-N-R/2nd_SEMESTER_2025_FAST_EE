//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//void Display_positive(int* x, int size, int count) {
//	
//	for (int i = 0; i < size; i++) {
//		if (x[i] > 0) {
//			count++;
//			cout << x[i] << endl;
//		}
//	}
//	cout << "The number of positive numbers in the array is: " << count << endl;
//}
//
//void Display_Negative(int* x, int size, int count) {
//	
//	for (int i = 0; i < size; i++) {
//		if (x[i] < 0) {
//			count++;
//			cout << x[i] << endl;
//		}
//	}
//	cout << "The number of negative numbers in the array is: " << count << endl;
//}
//
//int main()
//{
//	
//	int size;
//	cout << "Please enter the number of elements in the main array or size of array: ";
//	cin >> size;
//	int* ptr = new int [size];
//
//	srand(time(0));
//	
//	for (int i = 0; i < size;i++) {
//
//		int random_num = rand() % 201 - 100;
//
//
//		do {
//
//			ptr[i] = random_num;
//
//		} while (*ptr == 0);
//	}
//	cout << endl;
//	cout << "so these are the random numbers" << endl;
//	for (int i = 0; i < size;i++) {
//
//		cout << ptr[i]<<endl;
//
//	}
//
//
//	cout << endl;
//	cout << "Sorted Array of positive numbers: " << endl;
//	int countpos = 0;
//	Display_positive(ptr, size, countpos);
//	cout  << endl;
//	cout << "Negative numbers" << endl;
//	int countneg = 0;
//	Display_Negative(ptr, size	,countneg );
//
//	int * array_positives = new int [countpos];
//	for (int i = 0; i < countpos; i++) {
//		if (ptr[i] > 0) {
//			array_positives[i] = ptr[i];
//		}
//	}
//	delete[] ptr;
//	return 0;
//
//
//}
//
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to display array elements
void Display(int** x, int size) {
    for (int i = 0; i < size; i++) {
        cout << *x[i] << " ";
    }
    cout << endl;
}

int main() {
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;

    // Dynamic array allocation
    int* arr = new int[s];

    // Seed for random number generation
    srand(time(0));

    // Filling the array with random nonzero numbers
    for (int i = 0; i < s; i++) {
        arr[i] = (rand() % 200) - 100; // Generates numbers between -100 to 99
        if (arr[i] == 0) {
            arr[i] = 1; // Avoid zero by replacing it with 1
        }
    }

    // Counting positive and negative numbers
    int posCount = 0, negCount = 0;
    for (int i = 0; i < s; i++) {
        if (arr[i] > 0) {
            posCount++;
        }
        else {
            negCount++;
        }
    }

    // Dynamic memory allocation for pointer arrays
    int** posArr = new int* [posCount];
    int** negArr = new int* [negCount];

    // Storing pointers to positive and negative numbers
    int posIndex = 0, negIndex = 0;
    for (int i = 0; i < s; i++) {
        if (arr[i] > 0) {
            posArr[posIndex++] = &arr[i];
        }
        else {
            negArr[negIndex++] = &arr[i];
        }
    }

    // Display positive numbers
    cout << "Positive numbers: ";
    Display(posArr, posCount);

    // Display negative numbers
    cout << "Negative numbers: ";
    Display(negArr, negCount);

    // Free allocated memory
    delete[] arr;
    delete[] posArr;
    delete[] negArr;

    return 0;
}
