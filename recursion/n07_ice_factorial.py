import turtle as t


def f(n,l):
    if n==0:
        t.forward(l)
    else:
        f(n-1, l/2)
        t.left(90)
        f(n-1,l/4)
        f(n-1, -l/4)
        t.right(90)
        f(n-1, l/2)


if __name__ == "__main__":
    t.tracer(3)
    n, l = map(int, input().split())
    f(n, l)
    t.update()
    t.done()
