#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Fibonacci recursive function
def fibo(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibo(n-1)+fibo(n-2)

#Execution begins here
n = int(input('Enter the value of n: '))
print('The first', n, 'terms of the Fibonacci series are:')
for i in range(1, n+1):
    print(fibo(i), '', end='')
