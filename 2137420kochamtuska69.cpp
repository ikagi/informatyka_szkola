#include <iostream>
#include <cstring>
using namespace std;

void zad1(char tekst[50]) {
    int n = strlen(tekst);
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (tekst[i] == 'a') {
            tekst[i] = '#';
            x++;
        }
    }
    cout << tekst << endl;
    cout << "Suma operacji zamiany: " << x << endl;
}

void zad2(char wyraz[30]) {
    int n = strlen(wyraz);
    if (wyraz[0] == 't') {
        strcat(wyraz, "thm");
    }
    cout << wyraz;
}

int main()
{
    char tekst[50] = {};
    char wyraz[30] = {};
    cout << "Zad 1. Podaj tekst: ";
    cin >> tekst;
    zad1(tekst);
    cout << endl;
    cout << "Zad 2. Podaj wyraz: ";
    cin >> wyraz;
    zad2(wyraz);
}
