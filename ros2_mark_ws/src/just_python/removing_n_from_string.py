#This program removes the first n characters from a string
def remove_chars(word, n):
    print("Original String:", word)
    x = word[n:]
    return x    


print(remove_chars("Nasarasa", 2))
print(remove_chars("Lakalakalaka", 3))

