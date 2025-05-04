#Write a Python function code to print first and last numbers of a list and check if they are the same.
numbers_x = [10, 20, 30, 40, 10]
numbers_y = [75, 65, 35, 85, 95]

def same_first_last(numbers):
    first_number = numbers[0]
    last_number = numbers[-1]

    if first_number == last_number:
        return True
    else:
        return False

print(same_first_last(numbers_x))
print(same_first_last(numbers_y))
