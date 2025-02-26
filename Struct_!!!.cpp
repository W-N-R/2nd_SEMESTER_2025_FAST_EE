//#include <iostream>
//using namespace std;
//
//struct student {
//	string name;
//	string roll_number;
//};
//
//void display(const student& yyyy) {
//	cout << "\nSo the Name via function is : ";
//	cout << yyyy.name << endl;
//	cout << "So the roll number via function is : ";
//	cout << yyyy.roll_number;
//}
//
//int main() {
//
//	student Student_number_one;
//	cout << "Your name is :";
//	Student_number_one.name = "Muhammad Waleed";
//	cout << Student_number_one.name << endl;
//	cout << "Roll Number is : ";
//	Student_number_one.roll_number = "24L_6023 (BSEE)";
//	cout << Student_number_one.roll_number;
//
//	student* Student_ptr;
//	Student_ptr = &Student_number_one;
//	cout << "\nSo the data through pointer is : " << endl;
//	cout << "Name accessed VIA pointer is : ";
//	cout << Student_ptr->name << endl;
//	cout << "Roll Number accessed VIA pointer is : ";
//	cout << Student_ptr->roll_number;
//
//	cout << endl << endl;
//	display(Student_number_one);
//
//
//	cout << endl;
//	cout << "Enter the Number of students : ";
//	int stu = 0;
//	cin >> stu;
//
//	student* Student_multiple = new student[stu];
//	for (int i = 0; i < stu;i++) {
//		cout << "Enter the name of student number " << i + 1 << endl;
//		cin >> Student_multiple[i].name;
//		cout << "Enter the roll Number for the student" << i + 1 << endl;
//		cin >> Student_multiple[i].roll_number;
//	}
//
//	cout << "\n Now displaying all students details you entered : ";
//	for (int i = 0; i < stu;i++) {
//		display(Student_multiple[i]);
//	}
//	delete[] Student_multiple;
//	return 0;
//}




//------------------------------------------------------------------------



//#include <iostream>
//using namespace std;
//
//struct Employee {
//	string name;
//	int age;
//	string skills[4];
//
//};
//
//void display(const Employee& data) {
//	cout << "Name of the Employee is :";
//	cout << data.name << "\n";
//	cout << "Age of the Employee is : ";
//	cout << data.age << endl;
//	cout << "skills the person have is : ";
//	for (int i = 0; i < 4;i++) {
//		cout << data.skills[i] << " ";
//	}
//
//}
//
//int main() {
//	Employee emp;
//	emp.name = "WNR";
//	emp.age = 20;
//	emp.skills[0] = "c++";
//	emp.skills[1] = "Java";
//	emp.skills[2] = "Python";
//	emp.skills[3] = "SQL";
//
//	cout << endl;
//	display(emp);
//
//	Employee* ptr_for_skills_update = &emp;
//	ptr_for_skills_update->skills[0] = "Java Script";
//	ptr_for_skills_update->skills[1] = "Ns2";
//	ptr_for_skills_update->skills[2] = "CSS";
//	ptr_for_skills_update->skills[3] = "Matlab";
//	
//	for (int i = 0;i < 4;i++) {
//		cout << endl;
//		cout << emp.skills[i];
//	}
//	return 0;
//
//}


#include <iostream>
using namespace std;

int main() {
	int numList[6] = { 25, 37, 62, 78, 92, 13 };
	int* listPtr = numList;
	int* temp = listPtr + 2;
	int num;
	*listPtr = *(listPtr + 1) - *listPtr;
	listPtr++;
	num = *temp;
	temp++;
	listPtr++;
	*listPtr = *temp;
	*temp = num;
	listPtr = listPtr + 2;
	*listPtr = *(listPtr - 1);
	for (int i = 0;i < 6;i++) {
		cout << numList[i]<<" ";
	}

	return 0;
}