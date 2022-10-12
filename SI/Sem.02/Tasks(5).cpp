#include <iostream>

using namespace std;

//1.
//Напишете програма, която проверява дали въведена от потребителя година е високосна.
//Проверете сами кои години се считат за високосни.
// 
//2.
//Напишете програма, която приема един символ от входа и проверява дали :
//този символ е буква от латинската азбука;
//ако да, дали тази буква е гласна или съгласна.
//3.
//Напишете програма, която приема две различни числа и казва кое е по голямо.
//Използвайте тернарен оператор.
//4. 
// Да се напише програма, която чете от конзолата 1 цяло число - проценти от изпит, и отпечатва оценката по следната скала : >= 90 % : 6 +
//		>= 80 % : 6
//		>= 70 % : 5
//		>= 60 % : 4
//		>= 40 % : 3
//		< 40 % : 2
//5.
//Напишете програма, която приема от входа три числа - страни на триъгълник.
//Програмата да проверява дали това е валиден триъгълник.

int main() {
	/*int year;

	cout << "Select a year: "; cin >> year; cout << endl;

	if ((year % 4) == 0)
	{
		cout << "Visokosna e" << endl;
	}
	else
	{
		cout << "Ne e visokosna";
	}*/
	/*
	char a;
	cout << "Type in a symbol: "; cin >> a;
	if ((a >= 'a' && a <= 'z') || (a >= 65 && a <= 90)){
		cout << "It's latin" << endl;
		if (a == 97 || a == 101 || a == 105 || a == 111 || a == 117 || a == 65 || a == 69 || a == 73 || a == 79) {
			cout << "It's vowel" << endl;
		}
		else
		{
			cout << "Not vowel" << endl;
		}
	}
	else
	{
		cout << "Not a latin" << endl;
	}
	*/
	/*
	int a;
	int b;

	cout << "a: "; cin >> a; cout << "b: "; cin >> b;
	if(a > b)
	{
		cout << "The number a(" << a << ") is bigger than b(" << b << ")" << endl;
	}
	else if (a < b) {
		cout << "The number b(" << b << ") is bigger than a(" << a << ")" << endl;
	}
	else
	{
		cout << "The number a(" << a << ") is equal to b(" << b << ")" << endl;
	}
	return 0;
	*/
	/*
	int percent;
	int grade = 0;

	cout << "Percent: "; cin >> percent;
	if (percent < 0)
	{
		cout << "Error: invalid percentage" << endl;
	}
	else if(percent < 40)
	{
		grade = 2;
	}
	else if (percent >= 40 && percent < 60)
	{
		grade = 3;
	}
	else if (percent >= 60 && percent < 80)
	{
		grade = 4;
	}
	else if (percent >= 80 && percent < 90)
	{
		grade = 5;
	}
	else if (percent >= 90 && percent <= 100)
	{
		grade = 6;
	}
	else
	{
		cout << "Error: invalid percentage" << endl;
	}
	if(grade)
	{
		cout << "grade: " << grade << endl;
	}
	*/
	/*
	int a;
	int b;
	int c;

	cout << "a: "; cin >> a; cout << "b: "; cin >> b; cout << "c: "; cin >> c;
	if( a < (b + c) && b < (a + c) && c < (a +b))
	{
		cout << "Valid triangle";
	}
	else
	{
		cout << "Invalid triangle";
	}

	*/

	return 0;
}
