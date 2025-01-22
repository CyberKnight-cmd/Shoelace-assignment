def isPrime(num:int) -> bool:
    for i in range(2,num//2 + 1):
        if num%i==0:
            return False
    return True

upper, lower = map(int, input("Enter the upper and the lower range : ").split())
primes = []
for i in range(lower, upper + 1):
    if isPrime(i):
        primes.append(i)

print(primes)