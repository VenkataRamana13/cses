n = int(input())
a = [int(x) for x in input().split()]
count = 0
for i in range(1, n):
    if (a[i] < a[i - 1]):
        count -= a[i] - a[i - 1]
        a[i] = a[i - 1]
print(count)
