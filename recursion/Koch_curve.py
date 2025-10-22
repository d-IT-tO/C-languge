import turtle as t


t.tracer(0)
def f(n,a):
    if n==0:
        t.fd(a)
    else:
        f(n-1, a/3)
        t.lt(60)
        f(n-1,a/3)
        t.rt(120)
        f(n-1, a/3)
        t.lt(60)
        f(n-1, a/3)

if name = "__main__":
  f(7, 400)
  t.up()
  t.goto(-100, -100)
  t.down()
  for _ in range(3):
    f(6,400)
    t.rt(120)

  t.done()
