import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')

# Randomly generate two integers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call the C functions from the shared library and print the results
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
