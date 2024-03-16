import string

def ispangram(input_str, alphabet=string.ascii_lowercase):
    # Convert the input string to lowercase and convert it to a list
    str_lower = list(input_str.lower())
    
    # Convert the alphabet string to a list
    alphaset = list(alphabet)
    
    # Check if all lowercase characters in the input string cover all characters in the 'alphaset'
    return set(alphaset) <= set(str_lower)

# Example usage
print(ispangram('The quick brown fox jumps over the lazy dog'))
