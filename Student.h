#pragma once
#include <string>
using namespace std;

class student {

private:
	int roll_number;
	string name;
	float cgpa;

public:
	void set_rollnum();
	int get_rollnum(int);

};
