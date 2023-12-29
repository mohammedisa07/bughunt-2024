#program to print a tree pattern with asterisks
# eg :- height = 3
#output :-   *
#           ***
#          *****

def asterisk_tree(height,level):
  if level > height:
    return
  for j in range(2*level-1):
    print("*", end="")
  print()
  asterisk_tree(height, level + 1)

n=int(input("Enter height of tree : "))
asterisk_tree(n, 1)
