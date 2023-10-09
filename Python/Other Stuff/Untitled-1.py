num = input("Give number\n")
num = int(num)
while num != 6:
    if num <= 1000:
        num += 1
    elif num > 1000:
        num -= 1001
    print(num)

print("SIX!")

