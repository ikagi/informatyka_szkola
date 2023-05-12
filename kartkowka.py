from random import *

def czwarte():
    tekst = "informatyka"
    wynik = ""
    for i in range(0,len(tekst),2):
        wynik += tekst[i]
    return wynik

def piate():
    tekst = "informatyka"
    tekst = list(tekst)
    for i in range(0,len(tekst),1):
        tekst[i] += choice("AOEYIU")
    tekst = "".join(tekst)
    return tekst

def szoste():
    alfabet = "abcdefghijklmnopqrstuvwxyz"
    klucz = int(input("Podaj klucz: "))
    tekst = input("Podaj tekst: ")
    wynik = ""
    for t in tekst:
        if t in alfabet:
            wynik += alfabet[(alfabet.find(t) + klucz) % len(alfabet)]
    return wynik

def odszyfr():
    alfabet = "abcdefghijklmnopqrstuvwxyz"
    klucz = int(input("Podaj klucz: "))
    tekst = input("Podaj tekst: ")
    wynik = ""
    for t in tekst:
        if t in alfabet:
            wynik += alfabet[(alfabet.find(t) - klucz) % len(alfabet)]
    return wynik

print(czwarte())
print(piate())
print(szoste())
print(odszyfr())