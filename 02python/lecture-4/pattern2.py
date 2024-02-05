import os

def main():
    r,c=[int(x) for x in input("Enter the number of rows and columns: ").split()]
    i=1
    j=c
    while i<=r:
        while j>0:
            print(j,end=" ")
            j=j-1
        j=c
        i=i+1
        print()

if __name__=="__main__":
    os.system("cls")
    main()