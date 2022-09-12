#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Function to get proper divisors and find their sum
def sumProperDivisors(num):
    sum = 0
    lst = []
    for i in range(1, num):
        if num%i == 0:
            lst.append(i)
            sum += i
    print('Proper divisors of', num, 'are:', lst, '; ', end='')
    print('Sum =', sum)
    return sum

#Function to check if two numbers are amicable numbers
def checkAmicable(x , y):
    sum1 = sumProperDivisors(x)
    sum2 = sumProperDivisors(y)
    if  sum1== y and  sum2== x:
        return 1
    else:
        return 0

#Execution begins here
x = int(input('Please enter an integer: '))
y = int(input('Please enter another integer: '))
if checkAmicable(x, y):
    print(x, 'and', y, 'are Amicable numbers.')
else :
    print(x, 'and', y, 'are NOT Amicable numbers.')
