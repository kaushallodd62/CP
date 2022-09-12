#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Functon to find LCM of two numbers
def LCM(x, y):
    if x > y:
        lcm = x
    else:
        lcm = y
    while True:
        if lcm%x == 0  and lcm%y == 0 :
            return lcm
        lcm += 1

num1 = int(input('Please enter an integer: '))
num2 = int(input('Please enter another integer: '))
print('LCM(%d, %d) = %d'%(num1, num2, LCM(num1, num2)))
