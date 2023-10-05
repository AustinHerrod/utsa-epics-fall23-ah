import math
base=10
num=int(input("what do you want\n"))

def my_function(x,y):
    fNum=x
    run=int(round(math.log(x,y)))
    print(run)
    addNum=0
    multNum=1
    while run >= 0:
        change = fNum % (10**run)
        addNum += change
        multNum *= change
        fNum = fNum - change*(10**run)
        run -= 1
    print("The digital root is " + addNum)
    print("The multiplicative root is " + multNum)

my_function(num,base)

