# 4
_ = input()
data = set(map(int, input().split()))
data = sorted(data)

ans = []
streak_active = False
begin = 0
end = 0
for i in range(1, len(data)):
    if data[i] - data[i - 1] == 1:
        if streak_active:
            end = i
        else:
            begin = i - 1
            end = i
            streak_active = True
    elif streak_active:
        ans.append(str(data[begin]))
        if end - begin > 1:
            ans.append("...")
        ans.append(str(data[end]))
        streak_active = False
    else:
        ans.append(str(data[i - 1]))

# обработка случаев
# 14
# 0 2 3 4 5 7 8 12 13 14 15 17 20 22
# и
# 12
# 0 2 3 4 5 7 8 12 13 14 15 16
if streak_active:
    ans.append(str(data[begin]))
    if end - begin > 1:
        ans.append("...")
    ans.append(str(data[end]))
else:
    ans.append(str(data[-1]))

print(" ".join(ans))
