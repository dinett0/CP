seq = [int(x) for x in input().split()]
flag = True
for i in range(len(seq)):
    if i < len(seq) - 1 and int(seq[i]) >= int(seq[i + 1]):
        flag = False
print("YES" if flag else "NO")
