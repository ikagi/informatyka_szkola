x = ("a","b","c")
for i in range(len(x)):
    print(x[i])

print(x[1:])
print(5 in x)
print(max(x))
print(x+x)
#copying of tuples
x[:]
x*1
x+()
#end
#rozpakowywanie krotek
(jeden,dwa,trzy,cztery)=(1,2,3,4)
print(jeden)
#pakowanie
t=(1,2,3,4,5,6)
a,*b,c,d=t
print(a,b,c,d)
#end
#conversion tuple to list and list to tuple
x = list(t)
print(x)

y = tuple(x)
print(y)
#end




