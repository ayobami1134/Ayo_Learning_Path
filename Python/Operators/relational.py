def main():
    a = 21
    b = 10

    if a == b:
        print("Line 1 - a is equal to b")
    else:
        print("Line 1 - a is not equal to b")

    #not equal to
    if a != b:
        print("Line 2 - a is not equal to b")
    else:
        print("Line 2 - a is equal to b")

    if a < b:
        print("Line 2 - a is less than b")
    else:
        print("Line 2 - a is not less than b")

    if a > b:
        print("Line 3 - a is greater than b")
    else:
        print("Line 3 - a is not greater than b")

    # Change the values of a and b
    a = 5
    b = 20

    if a <= b:
        print("Line 4 - a is either less than or equal to b")

    if b <= a:
        print("Line 5 - b is neither less than or equal to b")

    if a >= b:
        print("Line 6 - a is neither greater than or equal to b")

    if b >= a:
        print("Line 7 - b is either greater than or equal to b")

if __name__ == "__main__":
    main()