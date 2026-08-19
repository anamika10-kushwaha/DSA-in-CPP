# import sys
# print(sys.version)
#ASCII VALUE
# ch=input("enter the character=")
# print(ord(ch))
# #for negative no.
# x=6
# y=~x+1
# print(y)
#difference of two number without using minus op.
# x=int(input("a:"))
# y=int(input("b:"))
# s=x+(~y+1)
# print("difference of two number=",s)
#WAP to multipl no. by 2 without using *
# x=int(input("number="))
# h=x<<1
# s=x>>1
# print(s)
# print(h)
#WAP to calc.& display INTEREST on loan rupess
# prin=float(input("enter principal:"))
# rate=float(input("enter rate:"))
# time=float(input("enter time:"))
# SI=(prin*rate*time)/100
# print("simple interest=",SI)
#change the value of same variable
# x=7
# print(x)
# x="helo"
# print(x)
#operations on complex number
# x=3+6j
# y=0-3j
# print(x+y)
# print(x*y)
# #for strings in multiple line use triple quotes (""" """)
# x=[1,2,"hello","anamika","kushwaha"]
# y=x[0:2]
# print(y)
# n=int(input("enter the number:"))
# z=n+(n*n)+(n*n*n)  #5+25+125
# print(z)
#question-01
# a=int(input("enter first number:"))
# b=int(input("enter second number:"))
# c=int(input("enter third number:"))
# if(c>a):
#     if(c>b):
#         print("c is greater")
# if(a>b):
#     if(a>c):
#         print("a is greater")
# else:
#     if(b>c):
#         print("b is greater")
#queston-02
# a=int(input("enter the number:"))
# if a==1:
#         print("number is neither prime nor composite")
#         exit()
# c=0
# for i in range(2,a):
#     if a % i==0:
#         c=c+1

# if(c==0):
#     print("number is prime")
# else:
#     print("number is not prime")
#question-03
# def myfunc(n):
#     return lambda a:a*n
# mytripler=myfunc(3)
# print(mytripler(11))

# def myfunc(n):
#     return lambda a:a*n
# mydoubler=myfunc(2)
# mytripler=myfunc(3)
# print(mydoubler(11))
# print(mytripler(11))
# import numpy as np
# arr1=np.array([1,2,3])
# print(arr1)
# len(arr1)
# sum(arr1)
# #other functions ek variable me np.function_name
#UNPACKING IN PYTHON=a collection of values of list,tuples,etc.python allows you to extract these values into variable.
# flowers=("lotus","rose","marigold")
# x,y,z=flowers
# print("x=",x)
# print("y=",y)
# print("z=",z)
# x="you "
# y="are "
# z="best"
# print(x+y+z)
#global variable
# x="anamika"
# def mufun():
#     print("you are " + x)
# mufun()
#local variable
# def fun():
#     global x
#     x=3
#     print(x+3) #6
# fun()
# print("value of x is ",x)
# stru="i am very enthusisatic person"
# # print(stru.replace("i am","you are"))
# print(stru.split("am"))
# # print(stru.strip())
# print(stru)
# if "very" in stru:
#     print("yes 'very' is present")
# print(stru[-2:-1])
list=[1,2,"a","g",2.45]
list.append(8)
print(list)
list.extend([8,"klrg"])
print(list)