# This program takes two numbers as input and returns their product if the product is less than or equal to 1000, otherwise it returns their sum.
print("Give two numbers to play around with")
#Input first number
a = int(input("Enter first number: "))
print("first number is:" + str(a))
#Input second number
b = int(input("Enter second number: "))
print("second number is:" + str(b))

# Function to multiply two numbers and return the product if less than 1000, else return their sum
def multiply_sum(a, b):

    if (a*b) <= 1000:
        return a*b
    else:
        return a+b

#Calling the function
sum = multiply_sum(a, b)
print("The result is: " + str(sum))