#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string students[5];
	double grades[5][6];

	for (int i = 0; i < 5; i++)
	{
		double total = 0;
		cout << "Enter student name ==> ";
		getline(cin, students[i]);
		for (int g = 0; g < 5; g++)
		{
			cout << "Enter Grade #" << g+1 << ":";
			cin >> grades[i][g];
			total += grades[i][g];
		}
		grades[i][5] = total/5;
		cin.ignore();
	}

	cout << fixed << setprecision(2);

	cout << "\nStudent Grade Report" << endl;
	cout << "===============================" << endl;
	cout << "Name\tG1\tG2\tG3\tG4\tG4\tAvg" << endl;
	cout << "===============================" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << students[i] << "\t";

		for (int g = 0; g < 6; g++)
		{
			cout << grades[i][g] << "\t";
		}
		cout << endl;
	}
}