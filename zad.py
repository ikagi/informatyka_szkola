#1wstaw w tekscie "informatyka"co trzecią literę "x"

tekst = "informatyka"
tekst = list(tekst)
for i in range(0,len(tekst),4):
    tekst[i] = "x"

tekst = "".join(tekst)

print(tekst) 