def main():
    a = 5
    b = 20
    c = True
    d = False
    e = bool(4)
    f = bool(0)

    if c and d:
        print("Line 0 - Condition is true")
    else:
        print("Line 0 - Condition is not true")

    if c or d:
        print("Line 00 - Condition is true")
    else:
        print("Line 00 - Condition is not true")

    if e and d:
        print("Line 000 - Condition is true")
    else:
        print("Line 000 - Condition is not true")

    if f or d:
        print("Line 0000 - Condition is true")
    else:
        print("Line 0000 - Condition is not true")

    if a and b:
        print("Line 1 - Condition is true")

    if a or b:
        print("Line 2 - Condition is true")

    # Let's change the values of a and b
    a = 0
    b = 10

    if a and b:
        print("Line 3 - Condition is true")
    else:
        print("Line 3 - Condition is not true")

    if a or b:
        print("Line 4 - Condition is true")
    else:
        print("Line 4 - Condition is not true")

    if not ((a and b) or (a < b)):
        print("Line 5 - Condition is true")

if __name__ == "__main__":
    main()