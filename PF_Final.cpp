//#include <iostream>
//using namespace std;
// template <class datatype>
// class specialarray {
// private:
//	 datatype maxSize;
//	 datatype arrayTop;
//	 datatype* list;
// public:
//	 specialarray(datatype max, datatype arr, datatype li):maxSize(max),arrayTop(arr),list(li){}
//	 insetAtTop()
// };

#include <iostream>
using namespace std;

void display_matrix(int** ptr,int row, int col) {
	for (int i = 0; i < row; i += 1) {
		cout << "         | ";
		for (int j = 0;j < col;j += 1) {
			cout << ptr[i][j] << " ";
		}
		cout << "| " << endl;
	}
}
void echelon_form(int** ptr, int row, int col) {
	for (int i = 0; i < row; i += 1) {
		for (int j = 0;j < col;j += 1) {
			if (ptr[i] == ptr[j]) {
				ptr[i][j] = 1;
			}
			else {
				ptr[i][j] = 0;
			}
		}
	}
}
void transpose(int** ptr, int row, int col) {

}
int main() {
	int row,col;
	cout << "please enter a size of row:";
	cin >> row;
	cout << endl << "please enter size of column: ";
	cin >> col;
	int** ptr = new  int* [row];
	for (int i = 0;i < row;i += 1) {
		ptr[i] = new int[col];
	}
	
	
	echelon_form(ptr, row, col);
	cout << endl << "------>So the matrix is<------" << endl << endl;
	display_matrix(ptr, row, col);
	

	
	delete [] ptr;
	return 0;
}