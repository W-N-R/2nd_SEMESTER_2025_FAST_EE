#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class a {
protected:
	string arr[100];
public:
	a();
	a(string);
};

a::a() {
	for (int i = 0; i < 100; i++) {
		cin >> arr[i];
	}
}


a::a(string data) 
{
	
	for (int i = 0; i < 100; i++) {
		arr[i] = data;
	}
}

class b : public a {
public:
	string* ptr=arr;
	void display();
	b();

};

b::b() :a() {

}

void b::display() {
	for (int i = 0; i < 100; i++) {
		cout << arr[i] << endl;
	}
}
#endif
