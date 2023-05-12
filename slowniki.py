tekst = "ciemno wszedzie glucho wszedzie co to bedzie co to bedzie"
wystapienia={}
for i in tekst.split():
    wystapienia[i]=wystapienia.get(i,0)+1
for slowo in wystapienia:
    print("Słowo ", slowo, " wystepuje ",wystapienia[slowo], " razy")
