#This program checks if a number is a palindrome
number = input("Enter a number to check if it's a palindrome: ")

def check_palindrome(number):
         
    # Reverse the string and compare it with the original
    if number == number[::-1]:
        print(f"{number} is a palindrome")
    else:
        print(f"{number} is not a palindrome")

check_palindrome(number)