#include<iostream>
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



int main() {
	int a = 10;
	int* ptr = &a;
	int** ptr2 = &ptr;
	cout << a << endl;
	cout << ptr << endl;
	cout << ptr2 << endl;



	return 0;

}