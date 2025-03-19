//#include <iostream>
//using namespace std;
//
//void memory_allocation(int**& parr, int size) {
//	*parr = new int(size);
//	for (int i = 0;i < size;i++) {
//		parr[i] = new int[i + 1];
//	}
//}
//int main() {
//	int** _2DArray;	int rows;
//
//	cin >> rows;
//	memory_allocation(_2DArray, rows);
//
//	for (int i = 0; i < rows; i++)
//		for (int k = 0; k < i + 1; k++)
//			_2DArray[i][k] = i + k;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < i + 1; k++)
//			cout << _2DArray[i][k] << " ";
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++)
//		delete[] _2DArray[i];
//	delete[] _2DArray;
//
//	int* intList;
//	intList = new int[5];
//	for (int i = 0; i < 5; i++)
//		cin >> intList[i];
//	for (int i = 4; i > 0; i--)
//		intList[i] = intList[i] + intList[i - 1];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << intList[i] << " ";
//		sum = sum + intList[i];
//	}
//	cout << endl << "Sum = " << sum << endl;
//	
//
//
//
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//class myclass{
//int a, b;
//public:
//friend int sum(myclass x);
//void set_ab(int i, int j);
//};
//void myclass::set_ab(int i, int j) {
//	a = i;
//	b = j;
//}
//int sum(myclass x) {
//	return x.a + x.b;
//}
//int main() {
//	myclass n;
//	n.set_ab(3, 4);
//	cout << sum(n);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS // If you want to suppress the warning
#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char* name;
    int rollNo;
    double* marks;
    int numSubjects;
    double percentage;

public:
    Student(const char* studentName, int roll, int subjects) {
        rollNo = roll;
        numSubjects = subjects;
        percentage = 0.0;

        // Allocate memory for name
        name = new char[strlen(studentName) + 1];

        // Use safe string copy
        strcpy_s(name, strlen(studentName) + 1, studentName);

        // Allocate memory for marks array
        marks = new double[numSubjects];

        // Input marks from user
        cout << "Enter marks for " << numSubjects << " subjects: ";
        for (int i = 0; i < numSubjects; i++) {
            cin >> marks[i];
        }
    }

    ~Student() {
        delete[] name;
        delete[] marks;
    }
};

int main() {
    char name[50];
    int rollNo, subjects;

    cout << "Enter student name: ";
    cin.getline(name, 50);
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    Student student(name, rollNo, subjects);
    return 0;
}
