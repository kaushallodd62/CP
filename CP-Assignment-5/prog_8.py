#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Function which returns the next Collatz Term
def collatzTerm(n):
    if n == 1:
        return 1
    if n%2 == 0:
        return n//2
    else:
        return 3*n+1

num = int(input('Please enter an integer: '))
print('Collatz Series: ', end='')
while True:
    if num == 1:
        print(num)
        break
    print(num, '', end='')
    num = collatzTerm(num)
