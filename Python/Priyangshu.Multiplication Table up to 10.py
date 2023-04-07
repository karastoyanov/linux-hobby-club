# Author: Priyangshu
# Program to print multiplication table up to 10 for a given number

number = int(input("Enter a number between 1 and 10: "))
print("Multiplication table for", number)

# loop through 1 to 10 and print the result of multiplication with given number
for i in range(1, 11):
    result = number * i
    print(number, "x", i, "=", result)