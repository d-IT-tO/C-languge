import turtle as t


def f_Koch(n, l):
    if n == 0:
        t.forward(l)
    else:
        f_Koch(n-1, l/3)
        t.left(60)
        f_Koch(n-1,l/3)
        t.right(120)
        f_Koch(n-1, l/3)
        t.left(60)
        f_Koch(n-1, l/3)

if __name__ == "__main__":
    t.tracer(0)
    f_Koch(5, 400)
    t.done()
    
