def main():
    number = int(input("Enter an integer: "))

    # true if number is less than 0
    if number < 0:
        print(f"You entered {number} and it is less than zero.")
    # false if number is less than 0
    else:
        print(f"You entered {number} and it is greater than or equal to zero.")
    
    print("The if statement is easy.")

if __name__ == "__main__":
    main()