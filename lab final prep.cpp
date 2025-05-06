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


#include <iostream>
using namespace std;
int main()
{
	int a = 32, * ptr = &a;
	char ch = 129, & cho = ch;
	cho += a;
	*ptr -= ch + 20;
	cout << *((char*)ptr) << ", " << (int)ch << endl;
	return 0;
}