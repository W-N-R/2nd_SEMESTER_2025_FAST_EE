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