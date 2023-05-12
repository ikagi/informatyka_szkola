def pal(s):
    return s==s[::-1]

s = input("Podaj ciąg: ")

if pal(s):
    print("Jest")
else:
    print("Nie jest")