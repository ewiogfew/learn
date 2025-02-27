#def funmath(a,b,c):
#    return a+b+c
#a=funmath(1, 2, c=3)
#print(a)

#错误示例
a=int(input("输入一个数字"))#input函数返回的是字符串
while True:
    if isinstance(a,(int,float))==True:
        print("是数字")
        break
    else:
        print("不是数字")
        a=int(input("输入一个数字"))
#input函数返回的是一个字符串，而你在将其转换为整数时，
#如果用户输入的不是一个有效的整数，int()函数会抛出一个ValueError异常。
#为了避免程序崩溃，你可以使用try-except块来捕获这个异常，并提示用户重新输入。


#正确示例:用try-except块捕捉异常
while True:
    try:
        a=int(input("输入一个数字"))
        if isinstance(a,(int,float))==True:#instance()函数判断a是否为int或float类型
            print("是数字")
            break
    except ValueError:
        print("不是数字")



#可迭代检测
def is_iterable(x):
    try:
        iter(x)
        print(f"{x}是可迭代的")
        return True
    except TypeError:
        print(f"{x}不是可迭代的")
        return False
is_iterable([1,2,3])#输出[1,2,3]是可迭代的
is_iterable(123)#输出123不是可迭代的
#iter()函数用于生成迭代器，如果对象可以被迭代，那么iter()函数返回一个迭代器对象。
#如果对象不可迭代，iter()函数会抛出一个TypeError异常。