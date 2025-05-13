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


#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void CalculateArea() {
        cout << "Shape: No specific area." << endl;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void CalculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Derived class - Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void CalculateArea() override {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

int main() {
    // Create objects of derived classes
    Rectangle rect(4, 5);
    Circle circ(3);

    // Call overridden functions directly
    rect.CalculateArea();
    circ.CalculateArea();

    // Base class object
    Shape shape;
    shape.CalculateArea();

    return 0;
}