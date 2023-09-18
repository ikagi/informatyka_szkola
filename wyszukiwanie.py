def szukaj(tekst,wzorzec):
    x=0
    for i in range(len(tekst)):
        j=0
        while(j<len(wzorzec) and tekst[i+j]==wzorzec[j]):
            j+=1
        if(j==len(wzorzec) and j>0):
            x+=1
    return x
print(szukaj("raradarapa", "ra"))