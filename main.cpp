#include <iostream>

using namespace std;

void pierw() {
	int a;
	cin >> a;
	if (a % 2 != 0 && a < 10) {
		a += 5;
	}
	else {
		a -= 2;
	}
	cout << a << endl;
}

void drug() {
	int k;
	while (true) {
		cout << "Podaj liczbe" << endl;
		cin >> k;
		switch (k) {
		case 1:
			cout << "Lal - to dziala" << endl;
			break;
		case 2:
			cout << "Nawet i to dziala" << endl;
			break;
		default:
			cout << "Inna liczba" << endl;
			break;
		}
	}
}

void trzec() {
	int a;
	cin >> a;
	while (true)
	{
		if (a > 0 && a != 13) {
			cout << "Podaj liczbe: ";
			cin >> a;
		}
		if (a > 0 && a == 13) {
			for (int i = 13; i >= 1; i--)
			{
				cout << i << endl;
			}
			break;
		}
	}
}

void czwarte() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		for (int i = 0; i < a; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "Wszystkie gwiazdki: " << a * b << endl;
}

void piate() {
	int a = 100;
	do
	{
		if (a % 5 == 0) {
			cout << a << endl;
		}
		a--;
	} while (a>0);
}

int main() {
	//pierw();
	//drug();
	//trzec();
	czwarte();
	//piate();
	return 0;
}
