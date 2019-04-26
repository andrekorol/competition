n = int(input())
while n != 0:
    str_list = []
    length = None
    for _ in range(n):
        string = input()
        str_list.append(string)
        if length is None or len(string) > length:
            length = len(string)
    print('\n'.join(word.rjust(length) for word in str_list))
    print()
    n = int(input())
