#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Function to compute factorial of a number
def fact(num):
    if num == 1:
        return 1
    return num*fact(num-1)

#Function to check if a number is a strong number
def checkStrongNumber(num):
    sum = 0
    for i in str(num):
        sum += fact(int(i))
    if sum == int(num):
        return 1
    else :
        return 0

#Execution begins here
num = int(input('Please enter a number: '))
if checkStrongNumber(num):
    print(num, 'is a strong number.')
else:
    print(num, 'is NOT a strong number.')
