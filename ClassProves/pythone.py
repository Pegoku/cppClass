l = [[[], []], [[], []], [[], []], [[], []]]

for i in range(4):
    for j in range(2):
        l[i][j].append(input("Introdueix un valor: "))
    
result = ""
for i in l:
    for j in i:
        result += j[0] + " "
    result += "\n"

print(result)