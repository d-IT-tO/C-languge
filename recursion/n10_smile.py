import turtle as t


def f(n, l):
    if n == 0:
        t.forward(l)
    else:
        t.right(45)
        f(n-1, l/4)
        t.left(45)
        f(n-1, l/2)
        t.left(45)
        f(n-1, l/4)
        t.right(45)


if __name__ == "__main__":
    t.tracer(0)
    n, l = map(int, input().split())
    f(n, l)
    t.update()
    t.done()

