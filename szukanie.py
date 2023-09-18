#searching array to find specified number, return i position of element in array
def szuk(lista, szuk):
    for i in range(len(lista)):
        if (lista[i]==szuk):
            return i
        
def szukanie2(T,lewy,prawy,szuk): 
    if(lewy<=prawy):
        srodek=(lewy+prawy)//2 
        if(T[srodek]==szuk):
            return srodek
        if(T[srodek]<szuk):
            return szukanie2(T,srodek+1,prawy,szuk)
        return szukanie2(T,lewy,srodek-1,szuk)
    return -1
    


print(szukanie2([1,2,3,4,5,6,11,15],0,7,15))