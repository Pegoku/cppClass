m1 = [[[],[]], [[],[]]]
m2 = [[[],[]], [[],[]]]
m3 = [[[],[]], [[],[]]]

print("Matrix 1")
for i in range(2):
    for j in range(2):
        m1[i][j].append(input())
    
print("Matrix 2")
for i in range(2):
    for j in range(2):
        m2[i][j].append(input())


print("Suma de matrius")
result = ""
for i1, i2 in zip(m1, m2):
    for j1, j2 in zip(i1, i2):
        result += str(int(j1[0]) + int(j2[0])) + " "
    result += "\n"

print(result)