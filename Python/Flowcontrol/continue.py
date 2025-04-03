a = 100
b = 3

print("Multiples of 3 that are even:", end=" ")
while b < a:
    if b % 2 != 0:
        b += 3
        continue
    print(b, end=" ")
    b += 3
print()