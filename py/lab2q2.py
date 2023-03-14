a =input("Please enter a number between 3 and 9")

if(int(a)<=9 and int(a)>=3):
    for i in range(1,int(a)+1):
        print(i * "*")
    for j in range(int(a)-1,0,-1):
         print(j * "*")

else:
    print("Invalid number")
    

