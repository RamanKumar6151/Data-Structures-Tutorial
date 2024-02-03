# searching
import os
os.system("cls")

def linear_search(arr, N, x):
# Time Complexity:

# Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1)
# Worst Case: In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
# Average Case: O(N)
# Auxiliary Space: O(1) as except for the variable to iterate through the list, no other variable is used.
    for i in range(N):
        if(arr[i]==x):
            return i;
    return -1



# driver code
if __name__=="__main__":
    arr=[2,3,4,10,40]
    N=len(arr)
    x=10
    print(linear_search(arr,N, x))
