def asterisk_tree(height, level):
    if level > height:
        return
    for _ in range(height - level):
        print(" ", end="")
    for _ in range(2 * level - 1):
        print("*", end="")
    print()
    asterisk_tree(height, level + 1)

n = int(input("Enter height of tree: "))
asterisk_tree(n, 1)

