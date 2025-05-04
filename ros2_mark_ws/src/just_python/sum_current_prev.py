#This code calculates the sum of the current number and the previous number in a loop until the input number.
x = input("Enter a number to start the addition loop: ")

previous_number = 0

for i in range(0, int(x)):
    x_sum = previous_number + i
    print(f"Sum of {previous_number} and {i} is: {x_sum}")
    previous_number = i
    
