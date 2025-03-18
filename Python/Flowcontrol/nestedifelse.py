def main():
    num1, num2 = map(int, input("Enter two integers: ").split())

    if num1 >= num2:
        if num1 == num2:
            print(f"{num1} is equal to {num2}")
        else:
            print(f"{num1} is greater than {num2}")
    else:
        print(f"{num1} is less than {num2}")

if __name__ == "__main__":
    main()