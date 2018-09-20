#include <iostream>
using namespace std;

int main()
{

	// value = withdrawl value
	int value = 0;
	int workingValue;

	// Assigning bill denominations, this could also be a const bc they shouldn't change
	int dollbill = 1;
	int fivebill = 5;
	int tenbill = 10;
	int twenbill = 20;
	int fifbill = 50;
	
	// Assigning bill counts

	int dollCount = 0;
	int fiveCount = 0;
	int tenCount = 0;
	int twenCount = 0;
	int fifCount = 0;

	char answer;

	do {
		answer = 'N';
		dollCount = 0;
		fiveCount = 0;
		tenCount = 0;
		twenCount = 0;
		fifCount = 0;

		do {
			cout << "Please enter withdrawl amount: ";
			cin >> value;

			if (value > 300) cout << "Sorry the maximum amount you can withdraw is $300.00 \n " << endl;
			if (value < dollbill) cout << "Sorry the minimum amount you can withdraw is $1.00 \n" << endl;

			workingValue = value;


		} while ((value > 300) | (value < dollbill));


		while (workingValue > 0)
		{
			if ((workingValue >= fifbill) && (workingValue / fifbill > 0))
			{
				fifCount = workingValue / fifbill;
				workingValue = workingValue % fifbill;
			}

			if ((workingValue >= twenbill) && (workingValue / twenbill > 0))
			{
				twenCount = workingValue / twenbill;
				workingValue = workingValue % twenbill;
			}

			if ((workingValue >= tenbill) && (workingValue / tenbill > 0))
			{
				tenCount = workingValue / tenbill;
				workingValue = workingValue % tenbill;
			}

			if ((workingValue >= fivebill) && (workingValue / fivebill > 0))
			{
				fiveCount = workingValue / fivebill;
				workingValue = workingValue % fivebill;
			}

			if ((workingValue >= dollbill) && (workingValue / dollbill > 0))
			{
				dollCount = workingValue / dollbill;
				workingValue = workingValue % dollbill;
			}
		}

		if (fifCount > 0)
			cout << "Dispensed " << fifCount << " $50.00 bill(s)" << endl;
		if (twenCount > 0)
			cout << "Dispensed " << twenCount << " $20.00 bill(s)" << endl;
		if (tenCount > 0)
			cout << "Dispensed " << tenCount << " $10.00 bill(s)" << endl;
		if (fiveCount > 0)
			cout << "Dispensed " << fiveCount << " $5.00 bill(s)" << endl;
		if (dollCount > 0)
			cout << "Dispensed " << dollCount << " $1.00 bill(s)" << endl;

		cout << "\n Do you want to make an additional withdrawl? Enter Y to continue ";
		cin >> answer;
		cout << "\n";

	}
	while (answer == 'Y');

	system("pause");

	return 0;
}