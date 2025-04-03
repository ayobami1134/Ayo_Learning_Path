def test0():
    ch = input("Enter a character: ")[0]

    if '0' <= ch <= '9':
        print(f"{ch} is a number.")
    if 'A' <= ch <= 'Z':
        print(f"{ch} is an upper case alphabet.")
    if 'a' <= ch <= 'z':
        print(f"{ch} is a lower case alphabet.")
    if not ('0' <= ch <= '9' or 'A' <= ch <= 'Z' or 'a' <= ch <= 'z'):
        print(f"{ch} is a special character.")

def test1():
    ch = input("Enter a character: ")[0]

    if '0' <= ch <= '9':
        print(f"{ch} is a number.")
    elif 'A' <= ch <= 'Z':
        print(f"{ch} is an upper case alphabet.")
    elif 'a' <= ch <= 'z':
        print(f"{ch} is a lower case alphabet.")
    else:
        print(f"{ch} is a special character.")

def main():
    number = int(input("Enter an integer: "))

    if number < 0:
        print(f"You entered {number} and it is less than zero.")
    elif number > 0:
        print(f"You entered {number} and it is greater than zero.")
    else:
        print(f"You entered {number} and it is equal to zero.")

    test0()
    test1()
    print("The if statement is easy.")

if __name__ == "__main__":
    main()