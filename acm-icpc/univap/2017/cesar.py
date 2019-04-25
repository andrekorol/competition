from string import ascii_uppercase

n = int(input())

while n > 0:
    s = input()
    v = int(input())
    original_str = ''
    for c in s:
        c_index = ascii_uppercase.index(c)
        original_index = c_index - v
        original_str += ascii_uppercase[original_index]
    print(original_str)
    n -= 1
