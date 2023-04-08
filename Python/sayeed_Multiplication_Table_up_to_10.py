def Multiplication(num):
    if num>=1 and num<=10:
        for i in range(1,11):
            print(f"{num} * {i} = {num*i}")
    else:
        print("Number is not in range")
    
    
try:
    Multiplication(int(input("Enter a number between 1 to 10: ")))
except:
    print("Invalid Input")

