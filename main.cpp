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

void buzki(int smile_number) {
	int i = smile_number;
	do
	{
		cout << i << endl;
		i--;
	} while (i>=1);
}

void buzki2(int smile_number){
	for (int i = 0; i < smile_number; i++)
	{
		cout << " :)" << endl;
	}
}

void tablice() {
	int tab1[6] = { 3,4,1,57,32,2 };
	float tab2[3] = { 12.3,1.45,6.432 };
	char tab3[3] = { 'a','b','c' };
	int tab4[] = { 1,2,3,4,5,6 };
	for (int i = 0; i < size(tab1); i++)
	{
		cout << tab1[i] << endl;
	}
}

void wprowadzanie() {
	int tab1[4][3];
	int suma = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Podaj " << i << " " << j << ": ";
			cin >> tab1[i][j];
		}
	}
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			cout << tab1[i][j]<<" ";
			suma += tab1[i][j];
		}
		cout << endl;
	}
	cout << suma;
}

int main() {
	//pierw();
	//drug();
	//trzec();
	//czwarte();
	//piate();
	//int k = 20;
	//buzki(k);
	//buzki2(k);
	//tablice();
	wprowadzanie();
	return 0;
}
