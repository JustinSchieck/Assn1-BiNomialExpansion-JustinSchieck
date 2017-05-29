#include <iostream>
using namespace std;

//Author: Justin Schieck
//Date: May 20/2017


int main() {

	int var, num1 = 1;
	double input;
	int menuChoice;
	//asks for year

	cout << "Please chose one of the following" << endl;
	cout << "1 for Pascals Triangle Program" << endl;
	cout << "2 to run Binomial Expansion " << endl;
	cout << "3 to cancel the current program and close" << endl;
	cin >> menuChoice;


	switch (menuChoice) {
	case(1): {
		cout << "Please Enter an Exponent Value between 0 to 10: " << endl;
		cin >> input;
		if (input <= 10) {
			for (int i = 0; i < input; i++)
			{
				for (var = 1; var <= input - i; var++)
					cout << "  ";

				for (int x = 0; x <= i; x++)
				{
					if (x == 0 || i == 0) {
						num1 = 1;
					}
					else {
						num1 = num1*(i - x + 1) / x;
					}
					cout << num1 << "   ";
				}
				cout << endl;
			}
			system("pause");
			return 0;
		}
		else {
			cout << "Number was not between 0 and 10, Program will close" << endl;
			system("pause");
			return 0;
		}
	}
	case(2): {
		cout << "Please Enter an Exponent Value between 0 to 10: " << endl;
		cin >> input;
		double a, b, total;

		cout << "Please enter your first term of the polynomial.." << endl;
		cin >> a;
		cout << "Please enter your second term polynomial.." << endl;
		cin >> b;
		
		//for each 1 in exponent, run the equation
		for (int i = 0; i < input; i++) {
			//n++ 0 = input
			//k--  start as input= 0
			total = pow((input*a), input)* pow(b, input); 
			//(Term from Pascal’s Triangle)*(FirstTerm)^n*(SecondTerm)^k 


			//	for (int i = n; i > 0; i--) {
			//		for (k; k < n; k++) {
			//			int n_choose_k = factorial(n) / (factorial(k) * factorial(n - k));
			//			cout << "(" << n_choose_k << "*";
			//			cout << terms.at(0) << "^(" << n << "-" << k << ")*" << terms.at(1) << "^" << k << ") + ";
			//		}
			//	}
		}
		


		cout << "The binomial theorm equals : " << total << endl;
		system("pause");
		return 0;

	}
	case(3): {
		cout << "Thank you for using JS systems " << endl;
		system("pause");
		return 0;
	}



	}


}


