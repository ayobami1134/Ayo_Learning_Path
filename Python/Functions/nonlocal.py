msg = "global"
#outside function
def outer_function():
  msg = "local"
  #inside function
  def inner_function():
    nonlocal msg
    msg = "nonlocal"
    print(f"Inner: {msg} scope")
  #calling inner function
  inner_function()
  print(f"Outer: {msg} scope")
#calling outer function
outer_function()
print(f"Global: {msg} scope")
