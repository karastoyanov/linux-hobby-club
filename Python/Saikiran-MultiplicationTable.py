def table (n: int):
    for i in range (1,11):
        print (n,"x",i,"=",(n*i))

def main():
    number = int(input("Enter a no. between 1 to 10: "))
    table(number)
    
main()