import os
os.system("cls")

def main():
    r=int(input("Enter number of rows r="))
    c=int(input("Enter number of columns c="))

    i=1
    j=1
    while(i<=r):
        while(j<=c):
            print(j,end="")
            j=j+1
        print(end="\n")
        j=0
        i=i+1

if __name__=="__main__":
    main()