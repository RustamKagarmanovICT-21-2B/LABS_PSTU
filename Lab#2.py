import random
a = random.randint(1, 100)
c = int(input("Угадайте число от 1 до 100, для начала введите число попыток \n"))
b = int(input('Введите предполагаемое число\n'))
k = 0
for i in range(1, c):
    if b == a:
        print("Поздравляю, вы нашли число за", i, 'попыток')
        k = 1
        break
    elif b != a:
        print("Количество оставшихся попыток:", c-i)
        if b < a:
            print("Введенное число меньше загаданного")
        elif b > a:
            print("Введенное число больше загаданного")
        b = int(input("Введите повторно число от 1 до 100\n"))
if k == 0:
    print('К сожалению вы не угадали ваше число -', a)
