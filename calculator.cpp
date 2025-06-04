#include <iostream>
using namespace std;

int operators;
int n1;
int n2;

int e = 1;

int main() {
	do { 
		cout << "Choose an operator ";
		cin >> operators;
		cout << "Type N1: "; // Type a number and press enter
		cin >> n1 ; // Get user input from the keyboard
		cout << "Type N2: "; // Type a number and press enter
		cin >> n2 ; // Get user input from the keyboard
		double div = (double) n1 / n2;
	  	switch(operators){
			case 1:
				cout << "Your number is... " << n1 + n2 << "\n";
				break;
			case 2:
				cout << "Your number is... " <<  n1 - n2 << "\n";
				break;
			case 3:
				cout << "Your number is... " <<  n1 * n2 << "\n";
				break;
			case 4:
				cout << "Your number is... " <<  div << "\n";
				break;
			default:
				cout << "NOT VALID OPERATOR. \n";
		}
	}
	while (e = 1);
}