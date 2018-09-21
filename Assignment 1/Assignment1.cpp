#include <iostream>
using namespace std;

int main()
{

	// value = withdrawl value
	int value = 0;
	int workingValue;

	// Assigning bill denominations, this could also be a const bc they shouldn't change
	int dollBill = 1;
	int fiveBill = 5;
	int tenBill = 10;
	int twentyBill = 20;
	int fiftyBill = 50;
	
	// Assigning bill counts
	int dollCount = 0;
	int fiveCount = 0;
	int tenCount = 0;
	int twenCount = 0;
	int fifCount = 0;

	char answer;

	do {

		answer = 'N';
		// reseting all bill counts back to 0
		dollCount = 0;
		fiveCount = 0;
		tenCount = 0;
		twenCount = 0;
		fifCount = 0;

		do 
		{
			cout << "Please enter withdrawl amount: ";
			cin >> value;

			// withdrawl restrictions, max $300 and min $1
			if (value > 300) cout << "Sorry the maximum amount you can withdraw is $300.00 \n " << endl;
			if (value < dollBill) cout << "Sorry the minimum amount you can withdraw is $1.00 \n" << endl;

			workingValue = value;

		// loop that will keep asking the user for a valid withdrawl amount if withdrawl conditions are not met
		} while ((value > 300) | (value < dollBill));

		if ((workingValue >= fiftyBill) && (workingValue / fiftyBill > 0) && (workingValue > 0))
		{
			// reseting all bill counts back to 0
			fifCount = workingValue / fiftyBill;
			workingValue = workingValue % fiftyBill;
			// will only display the amount of bills if the number of bills is > 0
			if (fifCount > 0)
				cout << "Dispensed " << fifCount << " $" << fiftyBill << ".00 bill(s)" << endl;
		}

		if ((workingValue >= twentyBill) && (workingValue / twentyBill > 0) && (workingValue > 0))
		{
			twenCount = workingValue / twentyBill;
			workingValue = workingValue % twentyBill;
			// will only display the amount of bills if the number of bills is > 0
			if (twenCount > 0)
				cout << "Dispensed " << twenCount << " $" << twentyBill << ".00 bill(s)" << endl;
		}

		if ((workingValue >= tenBill) && (workingValue / tenBill > 0) && (workingValue > 0))
		{
			tenCount = workingValue / tenBill;
			workingValue = workingValue % tenBill;
			// will only display the amount of bills if the number of bills is > 0
			if (tenCount > 0)
				cout << "Dispensed " << tenCount << " $" << tenBill << ".00 bill(s)" << endl;
		}

		if ((workingValue >= fiveBill) && (workingValue / fiveBill > 0) && (workingValue > 0))
		{
			fiveCount = workingValue / fiveBill;
			workingValue = workingValue % fiveBill;
			// will only display the amount of bills if the number of bills is > 0
			if (fiveCount > 0)
				cout << "Dispensed " << fiveCount << " $" << fiveBill << ".00 bill(s)" << endl;
		}

		if ((workingValue >= dollBill) && (workingValue / dollBill > 0) && (workingValue > 0))
		{
			dollCount = workingValue / dollBill;
			workingValue = workingValue % dollBill;
			// will only display the amount of bills if the number of bills is > 0
			if (dollCount > 0)
				cout << "Dispensed " << dollCount << " $" << dollBill << ".00 bill(s)" << endl;
		}

		// asks if the user wants to enter another transaction
		cout << "\n Do you want to make an additional withdrawl? Enter Y to continue ";
		cin >> answer;
		cout << "\n";

	} // loop if user wants to make another withdrawl
	while (answer == 'Y');

	system("pause");

	return 0;
}