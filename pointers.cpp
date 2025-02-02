#include <iostream>
using namespace std;

int main() {
	//int num1 = 10,num2=9;
	//int* p;
	//int* p2;
	//p = &num1;
	//p2 = &num2;
	//cout << *p;
	//cout << endl;
	//cout << endl;
	//num2 = num1 - *p2;
	//cout << num2;
	//cout << endl;
	//int int1 = 26;
	//int int2 = 45;
	//int* int1Ptr = &int1;
	//int* int2Ptr = &int2;
	//*int1Ptr = 89;
	//*int2Ptr = 62;
	//int1Ptr = int2Ptr;
	//*int1Ptr = 80;
	//int1 = 57;
	//cout << int1 << " " << int2 << endl;
	//cout << *int1Ptr << " " << *int2Ptr << endl;
	//cout << endl;
	//cout << endl;
	//cout << endl;

	//int num;
	//int* numPtr=&num;
	//cout << numPtr;
	//cout << endl;
	//*numPtr = 1;
	//cout << *numPtr;
	//cout << endl;
	//num = 7;
	//num = num + *numPtr;
	//cout << num;
	//cout << endl;
	//string str1 = "sunny";
	//string str2 = "cloudy";
	//string* s1;
	//cout << str1 << " " << str2 << endl;
	//s1 = &str1;
	////cout << *s1 << " " << str2 << endl;
	//str1 = str2;
	//str2 = *s1;
	//cout << str1 << " " << str2 << endl;


		int* speed = new int;    // Line 1
		double* travelTime;      // Line 2
		double* distance;        // Line 3

		speed = new int;         // Allocate memory
		travelTime = new double; // Allocate memory
		distance = new double;   // Allocate memory

		*speed = 65;             // Line 4 (Fixed)
		*travelTime = 8.5;       // Line 5

		*distance = (*speed) * (*travelTime); // Line 7

		cout << *distance << endl; // Line 8

		// Free allocated memory
		delete speed;
		delete travelTime;
		delete distance;

	

	return 0;
}