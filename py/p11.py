def binaryconversion(n):
    print(n % 2, end='')
    if n > 1:
        binaryconversion(n // 2)

number = int(input("Enter Number: "))
binaryconversion(number)
print()
