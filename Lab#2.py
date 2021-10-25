import random
a = random.randint(1, 100)
b = int(input("Введите число от 1 до 100\n"))
c = 6
for i in range(1, 6):
    if b == a:
        print("Поздравляю, вы нашли число")
        break
    else:
        print("Количество оставшихся попыток:", c-i)
        b = int(input("Введите повторно число от 1 до 100\n"))
