def all_palindromes(text):
    results = set()
    text_length = len(text)
    for idx, char in enumerate(text):
        # Check for longest odd palindrome(s)
        start, end = idx - 1, idx + 1
        while start >= 0 and end < text_length and text[start] == text[end]:
            results.add(text[start:end+1])
            start -= 1
            end += 1

        # Check for longest even palindrome(s)
        start, end = idx, idx + 1
        while start >= 0 and end < text_length and text[start] == text[end]:
            results.add(text[start:end+1])
            start -= 1
            end += 1
    return list(results)


def count_special_positions(string, palindrome):
    pass


string = input()
input_line = [int(x) for x in input().split()]
n = input_line[0]
special_positions = input_line[1:]
special_positions.sort()
palindromes = all_palindromes(string)
print(palindromes)
