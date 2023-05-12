

def szyfruj(tekst, alfabet, klucz):
    wynik = ""
    for t in tekst:
        if t in alfabet:
            wynik += alfabet[(alfabet.find(t) + klucz) % len(alfabet)]
    print(wynik)
  

znaki = "ABCDEFGHIJKLMNOPRSTUWXYZ"
input_us = input("Podaj ciąg: ")
szyfruj(input_us, znaki, 5)

