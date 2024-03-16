#recursive program to accept a number between 1 and 10 and print it

def get_number():
    while True:
        val1 = input('Enter a number: ')
        try:
            val1 = int(val1)
            if 1 <= val1 <= 10:
                return '{:.1f}'.format(val1)
            else:
                print("Number must be between 1 and 10.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

print(get_number())
