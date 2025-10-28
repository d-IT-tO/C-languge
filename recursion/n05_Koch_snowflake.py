import turtle as t
from n04_Koch_curvey import f_Koch


def triangle(n, l):
    for _ in range(3):
        f_Koch(7, 400)
        t.right(120)

if __name__ == "__main__":
    t.tracer(0)
    triangle(5, 400)
    t.done()
