def main():
    a = 10
    b = 20

    c = a + b
    print(f"a + b = {c}")

    c = a - b
    print(f"a - b = {c}")

    c = a * b
    print(f"a * b = {c}")

    c = b // a  # Use // for integer division
    print(f"b / a = {c}")

    c = b % a
    print(f"b % a = {c}")

    # Floor division
    c = b // a
    print(f"b // a = {c}")

    # Power
    c = a ** 2
    print(f"a ** 2 = {c}")

    # Increment and decrement operators
    print("\nIncrement and decrement operators: postfix")
    c = a
    a += 1
    print(f"a++ = {c}")
    print(f"a = {a}")

    c = a
    a -= 1
    print(f"a-- = {c}")
    print(f"a = {a}")

    print("\nIncrement and decrement operators: prefix")
    a += 1
    c = a
    print(f"++a = {c}")
    print(f"a = {a}")

    a -= 1
    c = a
    print(f"--a = {c}")
    print(f"a = {a}")

if __name__ == "__main__":
    main()