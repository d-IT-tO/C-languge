import turtle as t


def dragon_curve(n, l, q):
    if n == 0:
        t.forward(l)
    else:
        t.right(45*q)
        dragon_curve(n-1, l / (2**0.5), 1)
        t.left(90*q)
        dragon_curve(n-1, l / (2**0.5), -1)
        t.right(45*q)


if __name__ == "__main__":
    n, l = map(int, input().split())
    t.tracer(0)
    dragon_curve(n, l, 1)
    t.update()
    t.done()

