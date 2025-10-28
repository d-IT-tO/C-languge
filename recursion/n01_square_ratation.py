import turtle as t
import math as m

def square(l):
    for _ in range(4):
        t.fd(l)
        t.rt(90)

def f(fi, l):
    if l > 10:
        square(l)
        t.rt(fi)
        offset = l*m.sin(m.radians(fi))
        t.up()
        t.fd(offset)
        t.down()
        f(fi, l/m.cos(m.radians(fi)) - offset)

if __name__ == "__main__":
    fi, l = map(int, input().split())
    f(fi, l)
    t.update()
    t.done()
