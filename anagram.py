def anagram(s1,s2):
    if(sorted(s1)==sorted(s2)):
        print("Wyrazy są anagramem")
    else:
        print("Wyrazy nie są anagramami")
    
input_st = input("Podaj pierwszy ciąg: ")
input_sc = input("Podaj drugi ciąg: ")
anagram(input_st,input_sc)