def main():
    a = 10
    b = int(input("Enter number: "))
    c = int(input("Enter number: "))
    d = input("Enter character: ")
    e = input("Enter character: ")
    f = float(input("Enter float: "))
    g = float(input("Enter double: "))
    h, i, j = map(int, input("Enter three numbers: ").split())

    print(f"a = {a}")
    print(f"b = {b}")
    print(f"c = {c}")
    print(f"d = {d}")
    print(f"e = {e}")
    print(f"f = {f}")
    print(f"g = {g}")
    print(f"h = {h}")
    print(f"i = {i}")
    print(f"j = {j}")

if __name__ == "__main__":
    main()