#include <iostream>
using namespace std;

void getPrimeFactors(int aa[], int m, int number)
{
	cout << "the prime factorization of number=" << number << " is: " << endl;
	cout << number << "=";
	for (int i = 0; i < m; i++)
	{
		cout<< aa[i] << "*";
	}
	cout << "1" << endl;
}
void factor1()
{
	int number;
	cout << "Please type in an integer number!" << endl;
	cin >> number;
	int numberOut = number;
	int divisor = 2;
	//Suppose that the number of prime factors are less then 10
	int aa[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	while (number>1)
	{
		if (number % divisor == 0)
		{
			cout << number << "|" << divisor << endl;
			
			number = number / divisor;
			aa[i] = divisor;
			i++;
		}
		else
		{
			divisor += 1;
		}
	}
	cout << '1' << endl;
	cout << "---------------------" << endl;
	getPrimeFactors(aa, i, numberOut);
}
int main() 
{
	factor1();
	system("pause");
	return 0;
}
