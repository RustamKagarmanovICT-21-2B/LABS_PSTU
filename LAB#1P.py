import itertools
x = (input().list()) """Ввод данных и преврвщение в список"""
flag = 0 """Переменная ответачающая за true, false"""
while flag != 1: 
    for i in range(len(x)-1):
        for j in range(i+1, len(x)): """Пока flag == 0 (то есть пока  , """
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



