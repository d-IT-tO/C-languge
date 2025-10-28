import turtle as t


def fractal(n, l):
    if n == 0:
        t.forward(l)
    else:
        fractal(n-1, l/4)
        t.left(90)
        for _ in range(2):
            fractal(n-1, l/4)
            t.right(90)
        for _ in range(2):
            fractal(n-1, l/4)
        for _ in range(2):
            t.left(90)
            fractal(n-1, l/4)
        t.right(90)
        fractal(n-1, l/4)


if __name__ == "__main__":
    t.tracer(0)
    fractal(2, 400)
    t.update()
    t.done()
