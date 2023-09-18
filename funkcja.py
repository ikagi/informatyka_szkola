def f(x):
    return x**2-x-3

def oblicz(p,q,e):
    s=(p+q)/2
    while(f(p) != 0 and f(q) != 0 and q-p>=e):
        s=(p+q)/2
        if(f(p)*f(q) > 0):
            p=s
        else:
            q=s
    if(f(p)==0):
        return p
    if(f(q)==0):
        return q
    return s
print(oblicz(3,2,0.001))
    