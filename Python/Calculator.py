a=input("Enter 1st number : ")
b=input("Enter 2nd number : ")

print("\nMenu\n\n")
print("1 - Addition\n")
print("2 - Subtraction\n")
print("3 - Multiplication\n")
print("4 - Division\n")
print("5 - Modulo\n")
choice=input("\nEnter your choice : ")  # It takes input as string

if choice=='1' :
    sum=int(a)+int(b)
    print(a+" + "+b+" = "+str(sum))
elif choice=='2' :
    diff=int(a)-int(b)
    print(a+" - "+b+" = "+str(diff))
elif choice=='3' :
    pro=int(a)*int(b)
    print(a+" x "+b+" = "+str(pro))
elif choice=='4' :
    quo=int(a)/int(b)
    print(a+" / "+b+" = "+str(quo))
elif choice=='5' :
    mod=int(a)%int(b)
    print(a+" % "+b+" = "+str(mod))
else :
    print("Invalid Input")