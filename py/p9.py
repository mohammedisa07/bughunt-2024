#Write a Python function to check whether a string is a pangram or not.
#Note : Pangrams are words or sentences containing every letter of the alphabet at least once.

import string
import sys

# Define a function named 'ispangram' that checks if a string is a pangram
def ispangram(str1, alphabet=string.ascii_lowercase):
    alphaset = list(alphabet)
    
    str = list(str1.lower())
    
    # Check if all lowercase characters in the input string covers all characters in 'alphaset'
    return alphaset <= str

# Print the result of checking if the string is a pangram by calling the 'ispangram' function
print(ispangram('The quick brown fox jumps over the lazy dog')) 
