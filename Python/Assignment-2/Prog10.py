def fibo(a:int, b:int, n:int) -> int:
    if n==0:
        return a
    else:
        return fibo(b, a+b, n-1)

upper, lower = map(int, input("Enter the upper range and the lower range : ").split())
for i in range(upper,lower+1):
    print(fibo(0, 1, i), end = " ")
