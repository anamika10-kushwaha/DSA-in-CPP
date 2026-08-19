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
# fruits=["apple","mango","banana"]
# x,y,z=fruits
# print(x)
# print(y)
# print(z)
#DICTIONARY FUNCTION
courseFee={"b.tech":400000,"b.com":50000}
p=courseFee.setdefault("bca",100000)
print("default",p)
print(courseFee)
d={}
d['james']=78
print("content of d dictionary")
print(d)
d.update({"harry":42})
print("updated d dicitonary")
print(d)
d.setdefault("shyam",26)
print("dictionary d after the use of setdefault")
print(d)
d[input("new key:")]=eval(input("new value:"))
print(d)