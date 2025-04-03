def main():
    number = int(input("Enter an integer: "))

    # true if number is less than 0
    if number < 0:
        print(f"You entered {number} and it is less than zero.")
    
    # true if number is greater than 0
    if number > 0:
        print(f"You entered {number} and it is greater than zero.")
    
    print("The if statement is easy.")

if __name__ == "__main__":
    main()