#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char name[7] = "WALEED";
	cout << name;
	char name2[10];
	strcpy_s(name2, name);
	cout << name2;
	return 0;
}