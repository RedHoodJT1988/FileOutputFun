#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void printFormatted(ofstream& outfile, int value);

int main()
{
	ofstream outfile;
	int value;

	cout << "Enter the high number" << endl;
	cin >> value;
	cout << "Writing to file" << endl;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	printFormatted(outfile, value);


	outfile.close();

	cout << "Done!" << endl;

	return 0;
}

void printFormatted(ofstream& outfile, int value)
{
	for (int i = 1; i <= value; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}

}