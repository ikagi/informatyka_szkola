znaki = "ABCDEFGHIJKLMNOPRSTUWXYZ"

def szyfruj(tekst, alfabet, klucz):
    wynik = ""
    for t in tekst:
        if t in alfabet:
            wynik += alfabet[(alfabet.find(t) + klucz) % len(alfabet)]
    return wynik

def decrypt(tekst, alfabet, klucz):
    wynik = ""
    for t in tekst:
        if t in alfabet:
            wynik += alfabet[(alfabet.find(t) - klucz) % len(alfabet)]
    return wynik


print(szyfruj("OST ROWIEC", znaki, 5))
print(decrypt("UYZXUBNJH", znaki, 5))
