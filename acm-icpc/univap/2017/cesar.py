n = int(input())

while n > 0:
    s = input()
    shift = int(input())
    original_str = ''
    for c in s:
        c_ord = ord(c)
        c_ord -= ord('A')
        c_ord = (c_ord - shift + 26) % 26
        c_ord += ord('A')
        original_str += chr(c_ord)
    print(original_str)
    n -= 1
