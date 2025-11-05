import turtle as t


def fractal(n, l):
    if n == 0:
        t.forward(l)
    else:
        t.left(45)
        fractal(n-1, l)
        t.right(90)
        fractal(n-1, l)
        t.left(45)


if __name__ == "__main__":
    t.tracer(0)
    n, l = map(int, input().split())
    fractal(n, l)
    t.update()
    t.done()

