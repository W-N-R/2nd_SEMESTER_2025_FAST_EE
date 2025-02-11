#include<iostream>
#include<iomanip>
using namespace std;

//struct Student
//{
//	string name;
//	int rollnumber;
//	int batch;
//	string discipline;
//	float CGPA;
//};
//
//
//int main()
//{
//	Student Umair;
//	cout << "Enter the name of Student: ";
//	cin >> Umair.name;
//	cout << "Enter the CGPA of student: ";
//	return 0;
//}

void MyIncrementFirst(int* i) {
	(*i)++;
}

void MyIncrementSecond(int i)
{
	i++;
}

void MyIncrementThird(int& i) {
	i++;
}

void MyIncrementFourth(int** i) {
	*i = new int(0);
}

void MyIncrementFifth(int*& i) {
	i = new int(69);
}

int main() {
	int a = 5;
	int* p = &a;
	int** q = &p;

	cout<< *p <<endl;
	cout<< **q <<endl;
	cout<< p <<endl;
	cout<< *q <<endl; 
	
	int* myPtr = new int;
	int* yourPtr = new int;
	*myPtr = 10;
	*yourPtr = 2 * *myPtr + 3;
	cout << *myPtr << " " << (*yourPtr - *myPtr + 5) << endl;
	myPtr = yourPtr;
	yourPtr = new int;
	*yourPtr = 8;
	cout << *myPtr << " " << *yourPtr << endl;
	*myPtr = 17;
	*yourPtr = 4;
	cout << *myPtr << " " << *yourPtr << endl;
	
	double* length;
	double* width;
	cout << fixed << showpoint << setprecision(2);
	length = new double;
	width = new double;
	*length = 6.5;
	*width = 3.0;
	cout << "Area: " << (*length) * (*width) << ", ";
	cout << "Perimeter: " << 2 * (*length * *width) << endl;



	double* baseRadius;
	double* height;
	cout << fixed << showpoint << setprecision(2);
	baseRadius = new double;
	*baseRadius = 1.5;
	height = new double;
	*height = 2 * (*baseRadius);
	baseRadius = new double;
	*baseRadius = 4.0;
	cout << "Radius of the base: " << *baseRadius << endl;
	cout << "Height: " << *height << endl;
	cout << "Volume: " << 3.14 * (*baseRadius) * (*baseRadius)
		<< endl;
	cout << "Surface area: "
		<< 2 * 3.14 * (*baseRadius) * (*height) << endl;



	int* myListPtr = new int[10];
	int* yourListPtr;
	*myListPtr = 100;
	for (int i = 0; i < 10; i++)
		myListPtr[i] = i * (i - 1);

	yourListPtr = myListPtr;

	for (int i = 0; i < 10; i++)  // Fix incorrect indexing
		cout << myListPtr[i] << " ";

	cout << endl;

	delete[] yourListPtr;  // Move delete to the end to avoid dangling pointer


	
		int* a = new int(42);
		cout << "Result" << endl;
		MyIncrementFirst(&a);
		cout << "first " << a << endl;
		MyIncrementSecond(a);



		return 0;
	

}