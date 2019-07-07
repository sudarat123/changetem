/* Change Temperature celsius to farenhite */
#include <iostream>
using namespace std;
int main()
{
	int f ;
	float fahrenhite;
	cout << "Enter Celsius temperature : ";
	cin >> f;
	fahrenhite = (1.80 * f) + 32;
	cout << "Fahrenheit = " << fahrenhite << endl; 
	cout << "Now weather in Thailand is " << ((fahrenhite  > 70 ) == 1? "HOT":"COOL") << endl;
	return 0;
}