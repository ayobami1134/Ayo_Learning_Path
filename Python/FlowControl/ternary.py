def normal():
  # Greater number of 2 numbers
  print("normal function")
  a = int(input("Enter the first number: "))
  b = int(input("Enter the second number: "))
  if a > b:
      print(a, "is greater than", b, end="\n")
  else:
      print(b, "is greater than", a, end="\n")

def ternary():
  # Greater number of 2 numbers
  print("ternary function")
  a = int(input("Enter the first number: "))
  b = int(input("Enter the second number: "))
  print(a, "is greater than", b, end="\n") if a > b else print(b, "is greater than", a, end="\n") if a != b else print(a, "is equal to", b, end="\n")  # exp1 if true else exp2 if false else exp3

def main():
    normal()
    ternary()

main()