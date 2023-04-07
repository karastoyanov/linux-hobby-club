num=input("Enter the number between 1 to 10 : ")
if num.isdigit() and 1<=int(num)<=10:
    for i in range(1,11):
        print(f"{int(num)} X {i} = {int(num)*i}")
else:
    print("Invalid input!!. Please enter a number between 1 to 10.")
