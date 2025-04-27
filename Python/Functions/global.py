#global variable
tmp = 5

def add(a):
  global tmp
  tmp = 10
  return tmp + a

def main():
  print(f"Value of tmp: {tmp}")
  print(f"Value of add(5): {add(5)}")
  print(f"New value of tmp: {tmp}")

if __name__ == "__main__":
  main()
