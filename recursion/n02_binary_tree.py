import turtle as t


def bin_tree(n, l, fi):
    if n != 0:
        t.forward(l)
        t.right(fi)
        bin_tree(n-1, l/1.5, fi)
        t.left(2 * fi)
        bin_tree(n-1, l/1.5, fi)
        t.right(fi)
        t.forward(-l)


if __name__ == "__main__":
    n, l, fi = map(int, input().split())
    t.left(90)
    bin_tree(n, l, fi)
    t.update()
    t.done()
