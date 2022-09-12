#CP-Assignment-5
#Author - Kaushal Lodd
#Roll No. - T090

#Function to reverse a string
def reverseNumber(n):
	negative = False
	if n < 0 :
		n *= -1
		negative = True
	reverse = ''
	for dig in str(n):
		reverse = dig + reverse
	if negative :
		reverse = '-' + reverse
	return int(reverse)

def main():
#Inputting the integer as a string
    num = int(input('Please enter an intger: '))
#Displaying the output as integer
    print('Reversed Integer:', reverseNumber(num))

#Execution begins here
if __name__ == "__main__" :
    main()
