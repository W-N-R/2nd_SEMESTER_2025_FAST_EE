//#include <iostream>
//using namespace std;
//
//void memory_allocation(int**& parr, int size) {
//	*parr = new int(size);
//	for (int i = 0;i < size;i++) {
//		parr[i] = new int[i + 1];
//	}
//}
//int main() {
//	int** _2DArray;	int rows;
//
//	cin >> rows;
//	memory_allocation(_2DArray, rows);
//
//	for (int i = 0; i < rows; i++)
//		for (int k = 0; k < i + 1; k++)
//			_2DArray[i][k] = i + k;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < i + 1; k++)
//			cout << _2DArray[i][k] << " ";
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++)
//		delete[] _2DArray[i];
//	delete[] _2DArray;
//
//	int* intList;
//	intList = new int[5];
//	for (int i = 0; i < 5; i++)
//		cin >> intList[i];
//	for (int i = 4; i > 0; i--)
//		intList[i] = intList[i] + intList[i - 1];
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << intList[i] << " ";
//		sum = sum + intList[i];
//	}
//	cout << endl << "Sum = " << sum << endl;
//	
//
//
//
//	return 0;
//}
