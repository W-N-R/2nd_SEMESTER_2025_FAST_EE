//Exercise 3: (10 points)
//Encryption can be very useful method for protecting sensitive data from intruders.Data is
//converted into meaningless form by the usage of a given key and it is converted back to original
//form by utilizing the key again when required.You need to design an encryption\decryption
//application.
//Example:
//Inputs:
//Text: hello world, Key : 3
//Outputs :
//	Encrypted text : khoor zruog, Decrypted text : hello world
//	Note :
//1. Use only character arrays.
//2. String Library functions are not allowed.
//3. Make separate functions for encryption and decryption and write down the main
//function as well to make the code interactive.
//Usage of temporary arrays is prohibited.Both encryption and decryption should be performed
//on original array
#include <iostream>	
using namespace std;
void Encryption(char text[], int key) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] + key;
			if (text[i] > 'z') {
				text[i] = text[i] - 'z' + 'a' - 1;
			}
		}
		else if (text[i] >= 'A' && text[i] <= 'Z') {
			text[i] = text[i] + key;
			if (text[i] > 'Z') {
				text[i] = text[i] - 'Z' + 'A' - 1;
			}
		}
	}
	cout << "Encrypted text: " << text << endl;
}
void Decryption(char text[], int key) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] - key;
			if (text[i] < 'a') {
				text[i] = text[i] + 'z' - 'a' + 1;
			}
		}
		else if (text[i] >= 'A' && text[i] <= 'Z') {
			text[i] = text[i] - key;
			if (text[i] < 'A') {
				text[i] = text[i] + 'Z' - 'A' + 1;
			}
		}
	}
	cout << "Decrypted text: " << text << endl;
}

int main() {
	char text[100];
	int key;
	cout << "Enter the text: ";
	cin.getline(text, 100);
	cout << "Enter the key: ";
	cin >> key;
	Encryption(text, key);
	Decryption(text, key);
	return 0;
}
