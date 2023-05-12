import time
import turtle
import random
t=turtle.Pen()
turtle.bgcolor("ORANGE")
t.shape("turtle")
t.speed(0)
t.pensize(4)
for i in range(30):
    t.fillcolor(random.choice(["red","green","blue","black","purple","yellow","white"]))
    r = random.randint(10,100)
    t.begin_fill()
    for j in range(4):
        t.forward(r)
        t.right(-90)
    t.end_fill()
    t.penup()
    t.goto(random.randint(-200,200),random.randint(-200,200))
    t.pendown()
    
time.sleep(2)