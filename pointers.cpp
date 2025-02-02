#include <iostream>
using namespace std;

int main() {
	int num1 = 10,num2=9;
	int* p;
	int* p2;
	p = &num1;
	p2 = &num2;
	cout << *p;
	cout << endl;
	cout << endl;
	num2 = num1 - *p2;
	cout << num2;
	cout << endl;
	int int1 = 26;
	int int2 = 45;
	int* int1Ptr = &int1;
	int* int2Ptr = &int2;
	*int1Ptr = 89;
	*int2Ptr = 62;
	int1Ptr = int2Ptr;
	*int1Ptr = 80;
	int1 = 57;
	cout << int1 << " " << int2 << endl;
	cout << *int1Ptr << " " << *int2Ptr << endl;
	return 0;
}