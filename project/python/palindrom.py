#Alva Mao
#This program checks for palindrome 

def main():
	#inputting string to evaluate
	s=input(("Enter in string to evaluate: "))
	#calling function(functional and procedural programming)
	temp = isPalindrome(s)

	if (temp == s):
		print(s, "is a palindrome")
	else:
		print(s, "is not a palindrome", temp)

def isPalindrome(s):
	return s[::-1]

if __name__ == '__main__':
	main()
