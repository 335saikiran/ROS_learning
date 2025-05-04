#A program to print even indexed characters of a string

x = input("Enter a string: ")

x = list(x)

for i in x[0::2]:
    print(i)
        
    
