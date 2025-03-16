def main():
    # identity operators
    x = 5
    y = 5
    x1 = "Hello"
    y1 = "Hello"
    x2 = [1, 2, 3]
    y2 = [1, 2, 3]
    print(x is y)
    print(x is not y)
    print(x1 is y1)
    print(x1 is not y1)
    print(x2 is y2)
    print(x2 is not y2)
    print()
    print(id(x))
    print(id(y))
    print(id(x1))
    print(id(y1))
    print(id(x2))
    print(id(y2))
    print()

    # membership operators
    x = ["apple", "banana"]
    print("banana" in x)
    print("pineapple" not in x)

    # address operator
    print(id(x))
    print()

    # type operator
    print(type(x))
    print()

    # size operator
    print(len(x))

if __name__ == "__main__":
    main()