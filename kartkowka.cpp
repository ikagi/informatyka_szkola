#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s = "abcd";

	//Sprawdzanie czy string jest pusty
	bool pusty = empty(s);
	if (pusty) {
		cout << "Jest pusty";
	}

	//Sprawdzanie dlugosci 
	int ss = size(s);
	cout << "Dlugosc stringa: " << ss << endl;

	for (int i = 0; i < ss; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;

	//Wypisanie danego indeksu ze stringa
	char x = s.at(2);
	cout << x;
	cout << endl;
	
	//Dodanie elementu do stringa na końcu
	s.append("efgh");
	cout << s;

	cout << endl;

	//Dodanie elementu do stringa w podanym miejscu
	s.insert(6, "???");
	cout << s;

	cout << endl;

	//Wyciaganie elementu ze stringa
	string w;
	w = s.substr(6,3);
	cout << w << endl;
	cout << s;

	cout << endl;

	//Zamiana elementu stringa
	string r;
	r = s.replace(2, 3, "aaa");
	cout << r;

	cout << endl;

	//Szukanie elementu w stringu (zwraca indeks pierwszej znalezionej)
	int i = s.find("h");
	cout << i;

	cout << endl;

	for (int i = 0; i < size(s); i++)
	{
		//Wypisanie tylko liczb
		if (isdigit(s[i])) {
			cout << s[i];
		}
		//Wypisanie tylko cyfr
		if (isalpha(s[i])) {
			cout << s[i];
		}

		//Wypisanie tylko znakow
		if (!isalnum(s[i])) {
			cout << s[i];
		}
	}


	//Zerowanie stringa
	s.clear();
	cout << s;

	cout << endl;


}
