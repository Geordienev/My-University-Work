//Code produces a program that creates patterns by looping the numbers entered
#include <iostream>
using namespace std;
int main()
{
	int n;
	char char_a, char_b;
	char_a;
	char_b;
	cout << "Enter the amount of times you would like it to loop:  " << endl; // The entered amount with be stored within n
	cin >> n;
	cout << "Enter the two numbers you wish to be in the pattern:  " << endl; // The two numbers will respectively be stored in char_a and char_b
	cin >> char_a >> char_b;
	void display(char, int);
	char_a; 
	char_b;      
	for (int i = 0; i<n; i++) {
		display(char_a, i);
		cout << endl;
	}
	for (int i = n - 1; i>-1; i--) {
		display(char_b, i);
		cout << endl;
	}
	system("pause");
	return 0;
}


void display(char c, int n) {
	char blank = 32;
	for (int i = 0; i< n; i++) {
		cout << blank;
	}
	for (int i = 0; i < n + 1; i++) {
		cout << c;
	}
}
