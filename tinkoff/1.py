# 1
import math

total_score = 0
data = [tuple(map(float, input().split())) for _ in range(3)]

radius = [math.sqrt(d[0] ** 2 + d[1] ** 2) for d in data]

for r in radius:
    if r <= 0.1:
        total_score += 3
    elif r <= 0.8:
        total_score += 2
    elif r <= 1:
        total_score += 1

print(total_score)
