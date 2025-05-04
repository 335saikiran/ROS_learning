#Program to check what numbers are divisible by a given number in a list

def divisible_by_n(n, numbers):
    print("Numbers in the list :", numbers)
    print("Checking divisibility by :", n)

    divisible_numbers = []

    for i in numbers:
        if i % n == 0:
            divisible_numbers.append(i)
    #return print(f"The numbers divisible by {n} are {divisible_numbers}")
    return n, divisible_numbers
    
n, div = divisible_by_n(3, [1, 2, 3, 4, 5, 6, 7, 8, 9])
print(f"The numbers divisible by {n} are {div}")
#print(f"The numbers divisible by 3 are {divisible_by_n(3, [1, 2, 3, 4, 5, 6, 7, 8, 9])}")
#print(divisible_by_n(5, [10, 20, 30, 40, 50]))
#print(divisible_by_n(2, [11, 12, 13, 14, 15]))
