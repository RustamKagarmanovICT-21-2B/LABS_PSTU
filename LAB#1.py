import itertools
x = (input().split())
flag = 0
while flag != 1:
    for i in range(len(x)-1):
        for j in range(i+1, len(x)):
            if x[i] == x[j]:
                flag = 0
                x = (input().split())
                break
            elif i == len(x)-2:
                flag = 1
x = list(map(int, x))
a = itertools.permutations(x)
for i in a:
    print(i) 
    x.sort(reverse=True)



