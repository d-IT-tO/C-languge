import turtle as t


def f(n, l):
    if n==0:
        t.forward(l)
    else:
        f(n-1, l/2)
        t.left(60)
        f(n-1,l/4)
        f(n-1, -l/4)
        t.left(60)
        f(n-1, l/4)
        f(n-1, -l/4)
        t.right(120)
        f(n-1, l/2)

t.tracer(0)
f(3, 400)
t.update()
t.done()
