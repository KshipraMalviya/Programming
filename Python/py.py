print("Hare Krishna")
bolo="Jai Shri RadheKrishna\nRadhe Radhe"
number=18
print(bolo)
print(number)
num=1.8
print(num)
adorable=True
print(adorable)

name=input("\nEnter your name\n")
print("Hare Krishna, "+name)
a=input("Enter 1st number : ")  # 2    treats it as "2"
b=input("Enter 2nd number : ")  # 3    treats it as "3"
print(a+b)  # 23    "2"+"3"="23"

c=input("Enter 1st number : ")  # 2
d=input("Enter 2nd number : ")  # 3
sum=int(c)+int(d)   # type conversion
print(sum)  # 5
print("Sum = "+str(sum)) # print("Sum = "+sum) would give error

# Similarly other functions
# int()
# float()
# str()
# bool()

#------------------------------------------------------------
# STRINGS

name="Abcd Efgh"

print(name.upper())  # it doesn't change the original string
print(name.lower())
print(name)

print(name.find('E')) # 5 if does not exist then -1
print(name.find("Efgh")) # 5 if does not exist then -1

print(name.replace("Abcd Efgh","Ijkl Mnop"))  # Ijkl Mnop ,it doesn't change the original string
print(name)  # Abcd Efgh
print(name.replace("Efgh","Ijkl Mnop")) # Abcd Ijkl Mnop
print(name.replace('A','K'))  # Kbcd Efgh

print('A' in name)  # True
print('D' in name)  # False
print("Abcd" in name) # True

print(5/2)  # 2.5
print(5//2) # 2

print(5**2) # 25  (5 to the power 2)

print(2>3 or 3>2)  # || will give error
print(2>3 and 3>2) # && will give error
print(not 2>3)  # !(2>3) will give error


#--------------------------------------------------
# CONDITIONAL STATEMENTS

age=19

if age>=18:
    print("You are an adult")
    print("You can vote")
elif age<18 and age >3:
    print("You are in school")
else:
    print("You a tot")

print("Thank you")

#-------------------------------------

numbers=range(5)
print(numbers)  # range(0, 5)  0,1,2,3,4

for i in range(5):
    print(i)  # prints all numbers from 0 to 4

for i in range(5):
    print(i+1)  # prints all numbers from 1 to 5

# LOOPS-------------------------------

i=1
while i<=5 :
    print(i)
    i=i+1

i=1
while i<=5 :
    print(i* "* ")  # Fantastic  (i times string is multiplied)
    i=i+1

i=1
while i<=5 :
    print(i* "hello ")  # Fantastic  (i times string is multiplied)
    i=i+1

i=5
while i>=0 :
    print(i* "* ")  # Fantastic  (i times string is multiplied)
    i=i-1


# List-----------------------------------------------

marks=[99,98,100, "abc"]  # can store same as well as diff data types
print(marks)
print(marks[0]) # 99
print(marks[3]) # abc
print(marks[-1]) # abc (-ve means it will start from backwards)
print(marks[0:2]) # [99 , 98] (prints from starting index(0) to ending index-1 (2-1))

for score in marks :
    print(score)

marks.append(96)
print(marks)

marks.insert(0,96)
print(marks)

print(99 in marks) # True
print(95 in marks) # False

print(len(marks))

i=0
while i< len(marks):
    print(marks[i])
    i=i+1

marks.clear()
print(marks)

#break and continue-------------------------

words=["abc","def","ghi","jkl","mno"]

for w in words:
    if w=="jkl":
        break
    print(w)


#Tuples (immutable)--------------------------------------

marks1=(95,98,97,97,97) # Here we use parenthesis not brackets

# marks1[0] = 99 will give error as it is immutable

print(marks1.count(97)) # 3
print(marks1.index(97)) # 2 (index of 1st occurance)

# Sets ------------------------------------------------


marks2={95,98,97,97,97}  # stores unique value only
print(marks2)
# sets are unordered - can't be accessed by index - marks[0] will give error 
for m in marks2:
    print(m)


#------------------------------------------------

# []=List
# ()=Tuple  (by default)
# {}=Set

# if we don't put any of the braces then it will be treated as tuple  by default

person="abc","def","ghi"  #  will be treated as tuple
print(person)

# Dictionary------------------------------------------

marks3={"eng":95,"chem":98}
print(marks3["chem"])
marks3["phy"]=97
print(marks3)

marks3["phy"]=99
print(marks3)

# Functions------------------------------------------

from math import sqrt
from math import *    # using * imports all the functions in math module
print(sqrt(4))

def print_sum(m,n) :
    print(m+n)

print_sum(1,2)

def print_sum(k,l=2) :
    print(k+l)

print_sum(6)