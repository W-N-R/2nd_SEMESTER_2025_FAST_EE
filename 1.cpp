//#include<iostream>
//#include<iomanip>
//using namespace std;
//
////struct Student
////{
////	string name;
////	int rollnumber;
////	int batch;
////	string discipline;
////	float CGPA;
////};
////
////
////int main()
////{
////	Student Umair;
////	cout << "Enter the name of Student: ";
////	cin >> Umair.name;
////	cout << "Enter the CGPA of student: ";
////	return 0;
////}
//
//
//int main() {
//	int a = 5;
//	int* p = &a;
//	int** q = &p;
//
//	cout<< *p <<endl;
//	cout<< **q <<endl;
//	cout<< p <<endl;
//	cout<< *q <<endl; 
//	
//	int* myPtr = new int;
//	int* yourPtr = new int;
//	*myPtr = 10;
//	*yourPtr = 2 * *myPtr + 3;
//	cout << *myPtr << " " << (*yourPtr - *myPtr + 5) << endl;
//	myPtr = yourPtr;
//	yourPtr = new int;
//	*yourPtr = 8;
//	cout << *myPtr << " " << *yourPtr << endl;
//	*myPtr = 17;
//	*yourPtr = 4;
//	cout << *myPtr << " " << *yourPtr << endl;
//	
//	double* length;
//	double* width;
//	cout << fixed << showpoint << setprecision(2);
//	length = new double;
//	width = new double;
//	*length = 6.5;
//	*width = 3.0;
//	cout << "Area: " << (*length) * (*width) << ", ";
//	cout << "Perimeter: " << 2 * (*length * *width) << endl;
//
//
//
//	double* baseRadius;
//	double* height;
//	cout << fixed << showpoint << setprecision(2);
//	baseRadius = new double;
//	*baseRadius = 1.5;
//	height = new double;
//	*height = 2 * (*baseRadius);
//	baseRadius = new double;
//	*baseRadius = 4.0;
//	cout << "Radius of the base: " << *baseRadius << endl;
//	cout << "Height: " << *height << endl;
//	cout << "Volume: " << 3.14 * (*baseRadius) * (*baseRadius)
//		<< endl;
//	cout << "Surface area: "
//		<< 2 * 3.14 * (*baseRadius) * (*height) << endl;
//
//
//
//	int* myListPtr = new int[10];
//	int* yourListPtr;
//	*myListPtr = 100;
//	for (int i = 0; i < 10; i++)
//		myListPtr[i] = i * (i - 1);
//
//	yourListPtr = myListPtr;
//
//	for (int i = 0; i < 10; i++)  // Fix incorrect indexing
//		cout << myListPtr[i] << " ";
//
//	cout << endl;
//
//	delete[] yourListPtr;  // Move delete to the end to avoid dangling pointer
//
//
//	
//		int** _2DArray;
//		int rows;
//
//		cin >> rows;
//		_2DArray = new int* [rows];
//		for (int i = 0; i < rows; i++)
//			_2DArray[i] = new int[i + 1];
//
//		for (int i = 0; i < rows; i++)
//			for (int k = 0; k < i + 1; k++)
//				_2DArray[i][k] = i + k;
//
//		for (int i = 0; i < rows; i++)
//		{
//			for (int k = 0; k < i + 1; k++)
//				cout << _2DArray[i][k] << " ";
//			cout << endl;
//		}
//		for (int i = 0; i < rows; i++)
//			delete[] _2DArray[i];
//		delete[] _2DArray;
//		
//		int* intList;
//		intList = new int[5];
//		for (int i = 0; i < 5; i++)
//			cin >> intList[i];
//		for (int i = 4; i > 0; i--)
//			intList[i] = intList[i] + intList[i - 1];
//		int sum = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << intList[i] << " ";
//			sum = sum + intList[i];
//		}
//		cout << endl << "Sum = " << sum << endl;
//
//
//
//
//			int* ptr = new int(20); // Allocating and initializing
//
//			cout << "Value: " << *ptr << endl; // Output: 20
//
//			delete ptr; // Free allocated memory
//			ptr = nullptr; // Avoid dangling pointer
//
//			return 0;
//	
//	
//
//}

	
#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Taking input for rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocating a 2D array
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int [cols];
    }

    // Taking input for the 2D array
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    // Printing the 2D array
    cout << "The entered 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocating memory
    for (int i = 0; i < rows; i++) {
        delete[] array;
    }
        return 0;
}