#while循环,当条件是False,或者有关键字break会跳出
a=5
i=1
while True:
    b=int(input("1-10输入一个数字,猜对为止"))
    if b ==a:
        print(f"恭喜您第{i}次猜对")
        break
    else:
        print("再试一次")
        i+=1