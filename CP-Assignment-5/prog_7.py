#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Function to check if the number is a Fibonacci Number
def checkFibo(num):
    result = (5*(num**2)+4)**0.5
    if result == int(result):
        return 1
    result = (5*(num**2)-4)**0.5
    if result == int(result):
        return 1
    return 0

num = int(input('Please enter a number: '))
if checkFibo(num):
    print(num ,'is a Fibonacci number.')
else :
    print(num ,'is NOT a Fibonacci number.')
