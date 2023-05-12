def szyfruj(tekst):
    wynik = ''
    n = len(tekst)
    for i in range(0,n,3):
        wynik += tekst[i]
    for i in range(1,n,2):
        wynik += tekst[i]
    for i in range(2,n,3):
        wynik += tekst[i]
    print(wynik)


