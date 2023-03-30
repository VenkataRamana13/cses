s = input()
count = 1
max_count = 1
for i in range(1, len(s)):
    if s[i] == s[i-1]:
        count += 1
    else:
        count = 1
    if count > max_count:
        max_count = count
print(max_count)