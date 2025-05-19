//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 14, 51, 36, 47 }, * ptr = arr + 2;
//	int* p = ptr;
//	(*p)++; ++(*(--ptr));
//	cout << p[0] << " " << ptr[0];
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 32, * ptr = &a;
//	char ch = 129, & cho = ch;
//	cho += a;
//	*ptr -= ch + 20;
//	cout << *((char*)ptr) << ", " << (int)ch << endl;
//	return 0;
//}

//#include <iostream>;
//using namespace std;
//int main()
//{
//	int a = 4, * aa = &a, ** aaa = &aa;
//	cout << sizeof(a) << "," << sizeof(aa) << "," << sizeof(aaa);
//	return 0;
//}

//
//
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//template <class datatype>
//datatype Calculate_Sum_n_Average(datatype n1, datatype n2, datatype n3) {
//	datatype Total_sum,Total_average;
//	Total_sum = n1 + n2 + n3;
//	cout << "Total sum of three given inputs are:" << Total_sum << endl;
//	Total_average = (n1 + n2 + n3) / 3;
//	cout << "Total average of three given inputs are:" << Total_average << endl;
//	return Total_sum, Total_average;
//}
//int main() {
//	int num1, num2, num3;
//	float num11, num22, num33;
//	double num111, num222, num333;
//	cout << "---------Integer Test--------" << endl;
//	cin >> num1 >> num2 >> num3;
//	Calculate_Sum_n_Average(num1, num2, num3);
//	cout << endl << endl;
//	cout << "-----------Float Test----------" << endl;
//	cin >> num11 >> num22 >> num33;
//	Calculate_Sum_n_Average(num11, num22, num33);
//	cout << endl << endl;
//	cout << "-----------Double Test----------" << endl;
//	cin >> num111 >> num222 >> num333;
//	Calculate_Sum_n_Average(num111, num222, num333);
//	cout << endl << endl;
//	return 0;
//}



//
//#include <iostream>
//using namespace std;
//
//class ComplexNumber {
//public:
//    ComplexNumber() {}
//    ComplexNumber(float rl, float img); 
//    ComplexNumber& operator-(ComplexNumber&);
//    friend istream& operator>>(istream& in, ComplexNumber& n);
//
//private:
//    float real, imaginary;
//};
//istream& operator>>(istream& in, ComplexNumber& n) {
//    in >> n.real;
//    in >> n.imaginary;
//    return in;
//}
//ComplexNumber::ComplexNumber(float r1, float img) {
//    real = r1;
//    imaginary = img;
//}
//
//ComplexNumber& ComplexNumber::operator-(ComplexNumber& pn)
//{
//    ComplexNumber an;
//    an.real = real - pn.real;
//    an.imaginary = imaginary - pn.imaginary;
//    return an;
//}

//
//template <class datatype>
//class Number {
//private :
//	datatype n;
//public:
//	datatype display();
//
//};

//#include<iostream>
//using namespace std;
//
//int main() {
//    int nums[] = { 2, 4, 6, 8, 10 };
//    int* p = nums;
//
//    cout << *(p + 1) << endl; // Line 1
//    cout << *p << endl; // Line 2
//    p += 3;
//
//    cout << *p << endl;    // Line 3
//    cout << *(p - 2) << endl;   // Line 4
//    p--;
//    cout << *p << endl;    // Line 5
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Animal {
//public:
//    Animal() { cout << "Animal constructed\n"; }
//    ~Animal() { cout << "Animal destroyed\n"; }
//    virtual void speak() { cout << "Animal sound\n"; }
//    void move() { cout << "Animal moving\n"; }
//};
//
//class Dog : public Animal {
//public:
//    Dog() { cout << "Dog constructed\n"; }
//    ~Dog() { cout << "Dog destroyed\n"; }
//    void speak() override { cout << "woof woof!\n"; }
//    void move() { cout << "Dog running\n"; }
//};
//
//void makeSound(Animal a) {
//    a.speak();
//}
//
//int main() {
//    Animal* animalPtr = new Dog();
//
//    cout << "\nUsing pointer:\n";
//    animalPtr->speak();
//    animalPtr->move();
//    cout << "\nPassing by value:\n";
//    Dog myDog;
//    makeSound(myDog);
//
//    delete animalPtr;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//// Base class
//class Shape {
//public:
//    virtual void CalculateArea() {
//        cout << "Shape: No specific area." << endl;
//    }
//};
//
//// Derived class - Rectangle
//class Rectangle : public Shape {
//private:
//    double length, width;
//
//public:
//    Rectangle(double l, double w) {
//        length = l;
//        width = w;
//    }
//
//    void CalculateArea() override {
//        double area = length * width;
//        cout << "Area of Rectangle: " << area << endl;
//    }
//};
//
//// Derived class - Circle
//class Circle : public Shape {
//private:
//    double radius;
//
//public:
//    Circle(double r) {
//        radius = r;
//    }
//
//    void CalculateArea() override {
//        double area = 3.14 * radius * radius;
//        cout << "Area of Circle: " << area << endl;
//    }
//};
//
//int main() {
//    // Create objects of derived classes
//    Rectangle rect(4, 5);
//    Circle circ(3);
//
//    // Call overridden functions directly
//    rect.CalculateArea();
//    circ.CalculateArea();
//
//    // Base class object
//    Shape shape;
//    shape.CalculateArea();
//
//    return 0;
//}


//#include <iostream>
//#include<string>
//using namespace std;
//
//class library_members {
//protected :
//	string name;
//public:
//	library_members(string name) {
//		this->name = name;
//	}
//	virtual void display() = 0;
//	
//};
//
//class student : public library_members {
//private :
//	string roll_number;
//	string department;
//public:
//	student(string name, string rollnumber, string department) : library_members(name), roll_number(rollnumber), department(department){}
//	void display() {
//		cout << "Name: " << name << endl;
//		cout << "Roll Number: " << roll_number << endl;
//		cout << "Department: " << department << endl;
//	}
//};
//
//class teacher : public library_members {
//private:
//	string ID;
//	string Designation;
//public:
//	teacher(string name, string id, string designation) : library_members(name), ID(id), Designation(designation) {}
//	void display() {
//		cout << "Name: " << name << endl;
//		cout << "Roll Number: " << ID<<endl;
//		cout << "Department: " << Designation << endl;
//	}
//};
//
//int main() {
//	library_members* m1 = new student("raveha", "2024-EE-6004", "Electrical");
//	library_members* m2 = new teacher("aliha", "FAC-EE-13", "professor");
//
//	m1->display();
//	cout << "***************************" << endl;
//	m2->display();
//	
//	delete m1;
//	delete m2;
//
//
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//class point2D {
//protected:
//	double x, y;
//public:
//	point2D(): x(0),y(0) {}
//	point2D(double x_axis, double y_axis);
//	point2D operator + (point2D const& obj);
//	friend ostream& operator << (ostream& out, const point2D );
//	friend istream& operator >> (istream& in, point2D );
//
//};
//
//ostream& operator<<(ostream& out, const point2D cb)
//
//	{
//		out << "(" << cb.x << "," << cb.y <<")"<< endl;
//		return out;
//	}
//
//istream& operator>>(istream& in, point2D cb) {
//
//	in >>  cb.x >>  cb.y ;
//	return in;
//}
//
//
//point2D::point2D(double x_axis, double y_axis)
//{
//	x = x_axis;
//	y = y_axis;
//}
//
//point2D point2D::operator+(point2D const& obj) {
//	point2D temp;
//	temp.x = x + obj.x;
//	temp.y = y + obj.y;
//	return temp;
//}
//
//int main() {
//	point2D point1, point2, result;
//
//	cout << "Please enter first point in this form (x,y): ";
//	cin >> point1;
//
//	cout << "Please enter second point in this form (x,y): ";
//	cin >> point2;
//
//	result = point1 + point2;
//
//	cout << "Sum of points: " << result << endl;
//
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//class point2D {
//protected:
//    double x, y;
//public:
//    point2D() : x(0), y(0) {} // Initialize to avoid garbage values
//    point2D(double x_axis, double y_axis);
//    point2D operator+(point2D const& obj);
//    friend ostream& operator<<(ostream& out, const point2D& cb); // Add const and &
//    friend istream& operator>>(istream& in, point2D& cb); // Pass by reference
//};
//
//ostream& operator<<(ostream& out, const point2D& cb) {
//    out << "(" << cb.x << "," << cb.y << ")"; // Fix formatting
//    return out;
//}
//
//istream& operator>>(istream& in, point2D& cb) { // Pass by reference
//    in >> cb.x >> cb.y; // Adjust if input format includes parentheses/comma
//    return in;
//}
//
//point2D::point2D(double x_axis, double y_axis) {
//    x = x_axis;
//    y = y_axis;
//}
//
//point2D point2D::operator+(point2D const& obj) {
//    point2D temp;
//    temp.x = x + obj.x;
//    temp.y = y + obj.y;
//    return temp;
//}
//
//int main() {
//    point2D point1, point2, result;
//
//    cout << "Please enter first point in this form (x y): "; // Adjusted prompt
//    cin >> point1;
//
//    cout << "Please enter second point in this form (x y): "; // Adjusted prompt
//    cin >> point2;
//
//    result = point1 + point2;
//
//    cout << "Sum of points: " << result << endl;
//
//    return 0;
//}





//#include <iostream>
//
//using namespace std;
//
//template <class datatype>
//datatype findminmax(datatype a, datatype b, datatype c){
//		if (a<b<c){
//	cout<<"Minimum: "<<a;
//	}
//	if(a>b>c){
//		cout<<"Maximum: "<<a;
//	}
//	if (b<a<c){
//	cout<<"Minimum: "<<b;
//	}
//	if(b>a>c){
//		cout<<"Maximum: "<<b;
//	}
//	if (c<b<a){
//	cout<<"Minimum: "<<c;
//	}
//	if(c>b>a){
//		cout<<"Maximum: "<<c;
//	}
//	return datatype;
//}
//
//int main (){
//	int a,b,c;
//	cin>>a>>b>>c;
//	cout << "int type"<<endl;
//	findminmax(a,b,c);
//	cout <<"------------"<<endl;
//	double a1,b1,c1;
//	cout <<"double type"<<endl;
//	findminmax(a1,b1,c1);
//	cout <<"---------"<<endl;
//	system ("pause");
//}



//#include <iostream>
//#include <string>
//using namespace std;
//class Habitant {
//protected:
//	string type;
//	int temp;
//public:
//	Habitant(string typ, int temp) {
//		type = typ;
//		this->temp = temp;
//	}
//};
//
//class animal {
//private:
//	string Name;
//	int Age;
//	Habitant Obj;
//public:
//	animal(string name, int age, Habitant obj) : Name(name), Age(age), Obj(obj) {}
//	virtual void display() {}
//};
//
//
//class Bird :public animal {
//protected:
//	int wingspan;
//	bool canfly;
//public:
//	Bird(string name, int age, Habitant obj, int wing) : animal(name, age, obj), wingspan(wing) {}
//	void display();
//};
//
//
//class Mammal :public animal {
//protected:
//	string furtype;
//	bool isDemonsticated;
//public:
//	Mammal(string name, int age, Habitant obj, string typ) : animal(name, age, obj), furtype(typ) {}
//	void display();
//};
//
//
//int main() {
//	Habitant forestHabitant("forest", 22);
//
//
//	system("pause");
//}
//
//void Mammal::display()
//{
//	cout << "mammal display" << endl;
//}
//
//void Bird::display()
//{
//	cout << "bird diplayed " << endl;
//}
// 
// 
// 
// 
// 
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Habitant {
//protected:
//	string type;
//	int temp;
//public:
//	Habitant(string typ, int temp) {
//		type = typ;
//		this->temp = temp;
//	}
//};
//
//class animal {
//private:
//	string Name;
//	int Age;
//	Habitant Obj;
//public:
//	animal(string name, int age, Habitant obj) : Name(name), Age(age), Obj(obj) {}
//	virtual void display() {}
//	virtual ~animal() {}
//};
//
//class Bird : public animal {
//protected:
//	int wingspan;
//	bool canfly;
//public:
//	Bird(string name, int age, Habitant obj, int wing) : animal(name, age, obj), wingspan(wing) {}
//	void display() {
//		cout << "Bird Displayed with wingspan: " << wingspan << endl;
//	}
//};
//
//class Mammal : public animal {
//protected:
//	string furtype;
//	bool isDemonsticated;
//public:
//	Mammal(string name, int age, Habitant obj, string typ) : animal(name, age, obj), furtype(typ) {}
//	void display() {
//		cout << "Mammal Displayed with fur type: " << furtype << endl;
//	}
//};
//
//int main() {
//	Habitant forestHabitant("forest", 22);
//	Bird b("Parrot", 2, forestHabitant, 15);
//	Mammal m("Lion", 5, forestHabitant, "Thick");
//
//	b.display();
//	m.display();
//
//	return 0;
//}


//
//
//#include <iostream>
//
//using namespace std;
//
//class fraction {
//protected:
//	double fraction1;
//	
//public:
//	fraction(){}
//	fraction (double fr){
//	fraction1 = fr;
//	}
//	fraction operator + (fraction& const a){
//	fraction temp;
//	temp.fraction1= fraction1 + a.fraction1;
//	return temp;
//	}
//	fraction operator / (fraction& const a){
//	fraction temp;
//	temp.fraction1= fraction1 / a.fraction1;
//	return temp;
//	}
//	
//	friend ostream& operator << (ostream& out ,const fraction&  a);
//};
//
// ostream& operator << (ostream& out ,const fraction&   a){
//	out<<a.fraction1;
//	return out;
//} 
//
// int main (){
// fraction far1, far2, total;
// far1= 22/9;
// far2=36/6;
// cout <<"fraction 1 is : "<<far1<<endl;
// cout <<"fraction 2 is : "<<far2<<endl;
// cout <<"so the sum of the to give fractions are: ";
// total = far1+far2;
// cout<<total<<endl;
// total=far1/far2;
// cout<<"so the fration between two fractions is : ";
// cout << total << endl;
// system ("pause");
// return 0;
// }