from collections import Counter

s = input()
freq = Counter(s)

odd_count = sum(1 for count in freq.values() if count % 2 == 1)

if odd_count > 1:
    print("NO SOLUTION")
else:
    palindrome = []
    for char, count in freq.items():
        if count % 2 == 0:
            palindrome.extend([char] * (count // 2))
        else:
            middle_char = char
            palindrome.extend([char] * ((count - 1) // 2))
    palindrome = ''.join(palindrome + [middle_char] + palindrome[::-1]) if odd_count == 1 else ''.join(palindrome + palindrome[::-1])
    print(palindrome)

