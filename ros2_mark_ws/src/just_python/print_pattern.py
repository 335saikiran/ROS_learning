#Program to print a triangle pattern to the given limit number
target_number = int(input("Enter a triangle limit number: "))

for i in range(1, target_number+1):
    for j in range(0, i):
        print(i, end=" ")
    print()
    i += 1