def ispalindrome_str(number):
    my_string = str(number)
    return my_string == my_string[::-1]

def three_digit_multiple(n):
    for j in range(100, 1000):
        if n % j == 0 and n / j >= 100 and n / j <= 999:
            return 1
    return 0

for i in range(998002, 10000, -1):
    if three_digit_multiple(i) and ispalindrome_str(i):
        print(i)
        break