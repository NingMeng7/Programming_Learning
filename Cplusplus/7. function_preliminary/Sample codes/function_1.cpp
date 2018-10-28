#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices;
	cout << "Please enter the total number of choices on the game card and the number of pick allowed" << endl;
	while ((cin >> total >> choices) && choices <= total) {
		cout << "You have one chance in ";
		cout << probability(total, choices);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye!" << endl;
	cin.clear();
	while (cin.get() != 'a') {
		;
	}
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result *= n / p;
	}

	return result;
}