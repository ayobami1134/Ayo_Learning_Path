x = 5
num = 7.25

def main():
    a = 10
    b = 3.14
    c = 'A'

    d = c
    ptr = c

    vb = True  # true = 1, false = 0
    vc = False

    # print variables
    print("Variable values:")
    print(f"Value of a: {a}")
    print(f"Value of b: {b}")
    print(f"Value of c: {c}")
    print(f"Value of d: {d}")
    print(f"Value of *ptr: {ptr}")
    print(f"Value of vb: {int(vb)}")
    print(f"Value of vc: {int(vc)}")

    # print addresses
    print("\nVariable addresses:")
    print(f"Address of a: {id(a)}")
    print(f"Address of b: {id(b)}")
    print(f"Address of c: {id(c)}")
    print(f"Address of d: {id(d)}")
    print(f"Address of ptr: {id(ptr)}")

    c = chr(66)
    print(f"\nValue of c: {c}")
    ptr = d
    print(f"Value of *ptr: {ptr}")
    print(f"Address of ptr: {id(ptr)}")

    def rue():
        w = 70
        print(f"\nValue of w: {w}")
        print(f"Value of x: {x}")

        def sue():
            print(f"Value of num: {num}")
            print(f"Sum of num+w: {num + w:.2f}")
        
        sue()
    
    rue()
    
    # print(f"\nValue of w: {w}") # Error: w is not defined

def test():
    print(f"Sum of x+num: {x+num:.2f}")
    # print(f"Value of c: {c}") # Error: c is not defined

if __name__ == "__main__":
    main()