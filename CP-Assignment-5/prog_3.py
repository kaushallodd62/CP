#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#importing 'prog_2.py' from the same directory to use
#reverseNumber method
import prog_2 as reverse

num = int(input('Please enter an integer: '))
if num == reverse.reverseNumber(num):
    print('The number is Palindromic.')
else:
    print('The number is NOT Palindromic.')
