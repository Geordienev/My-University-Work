#include <iostream>
#include <iomanip>
using namespace std;


void displayMenu(int &option) { //Creation of the menu to be used - choices are all number based.
	cout << "Please select an option: " << endl
		<< "1 - Temperature Converter " << endl
		<< "2 - Seconds Converter " << endl
		<< "3 - Volume of a cuboid " << endl
		<< "4 - Quit\n" << endl
		<< "Please enter a number: ";
	cin >> option;
}



void time(int& seconds,int& days, int& hours, int& min, int& sec) //Second to Days/hours/minutes/seconds converter.
{
	cout << "\n--------------------------------------------------" << endl;
	cout << "\nEnter seconds within a range of 0 - 31536000: "; 
	cin >> seconds;
	days = seconds / 60 / 60 / 24; //Maths equations to change the seconds into days and so forth.
		cout << "Days: " << days << endl;
		hours = (seconds / 60 / 60) % 24;
		cout << "Hours: " << hours << endl;
		min = (seconds / 60) % 60;
		cout << "Minutes: " << min << endl;
		sec = seconds % 60;
		cout << "Seconds: " << sec << endl;
		cout << "\n";
}

void fahrconvert(double& fahr, int& num) { //Fahrenheit to Celsius converter, when started it will ask how many times you wish to convert
	cout << "\n--------------------------------------------------" << endl;
	cout << "\nHow many conversions do you want to see? ";
	cin >> num;
	cout << "\nAt what temperature Fahrenheit do you want to start? ";
	cin >> fahr;
	cout << "\nFahrenehit || Celsius\n"
		<< "----------------------------\n";
	for (int x = 1; x <= num; x++) {
		cout << setw(3) << fahr << "          " << setw(3) << (5.0 / 9.0) * (fahr - 32.0) << endl;
		fahr += 5;
		if (x < num) {
			cout << "\nAt what temperature Fahrenheit do you want to start? ";
			cin >> fahr;
			cout << "\nFahrenheit || Celsius\n"
				<< "----------------------------\n";
		}
		else {
			cout << "\n";
		}
	}

}

void cuboidCalc(int& length, int& depth, int& height, int& volume) {
	cout << "--------------------------------------------------\n";
	cout << "Enter the length of the cuboid: ";
	cin >> length;
	cout << "\nEnter the depth of the cuboid: ";
	cin >> depth;
	cout << "\nEnter the height of the cuboid: ";
	cin >> height;
	if (length == depth && depth == height) // If the length, depth and height are equal.
		cout << "\nThe cuboid is a cube";
	else if (length == depth && height != depth)   //If the length and depth are equal.
		cout << "\nThe cuboid has a square face but is not a cube\n";
	else if (length == height && depth != height) //If the length and height are equal.
		cout << "\nThe cuboid has a square face but is not a cube\n";
	else if (depth == height && length != depth) //If the depth and height are equal.
		cout << "\nThe cuboid has a square face but is not a cube\n";
	else if (length != depth && depth != height) //If the length, depth and height are not equal.
		cout << "\nThe cuboid has no square faces\n";
	volume = height * length * depth;
	cout << "\nThe volume of the cuboid is: " << volume << endl;
	cout << "--------------------------------------------------" << endl;
}

int main() {
	int option = 0, num;
	int seconds, days, hours, min, sec;
	int length, depth, height, volume;
	bool exit = false;
	double fahr;
	

	while (!exit) {
		displayMenu(option);
		switch (option) {
		case 1:
		{
			fahrconvert(fahr, num); //Calls the fahrenheit function
		}
		break;

		case 2: {
			time(seconds, days, hours, min, sec); //Calls the time function
		}
				break;
		case 3:
		{
			cuboidCalc(length, depth, height, volume); //Callst he Cuboid volume function
	
		}
		break;
		case 4:
		{
			exit = true; //If 4 is chosen, the boolean changes to true therefore exiting the while loop
		}
		break;
		default:
		{
			cout << "Invalid choice" << endl;
		}
		break;
		}
	}
			cout << "Exiting" << endl; //Close the program
			cin.ignore();
			cin.get();
			return 0;
		}
