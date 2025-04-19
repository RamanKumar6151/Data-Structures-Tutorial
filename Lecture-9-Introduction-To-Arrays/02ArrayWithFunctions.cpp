#include <bits/stdc++.h>
using namespace std;

// how to pass arrays into functions
// return_type function_name(datatype array_name[], int size)
void printArray(int arr[], int size)
{
    cout << "printing array\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "printing done" << endl;

    // will always give 1 because
    //     What actually happens is not a full array being passed, but rather a pointer to the first element of the array. In function parameters, an array decays into a pointer. This means:

    // arr inside the function is treated as int* arr, not int arr[10].
    // sizeof(arr) now gives the size of the pointer, not the size of the full array.
    // On a 32-bit system, sizeof(arr) would be 4 bytes.
    // On a 64-bit system, sizeof(arr) would be 8 bytes.
    // sizeof(int) is still 4 bytes.
    // Therefore, sizeof(arr) / sizeof(int) evaluates to 4 / 4 = 1 (or 8 / 4 = 2 in a 64-bit system), which is incorrect for the actual array size.
}

int aSize(int arr[])
{
    return sizeof(arr) / sizeof(int);
}

int main()
{
    system("CLS");
    // array decalarion
    int first[10] = {0};
    printArray(first, 10);

    // can we find size of array? yes, by using sizeof.
    cout << "\nfifth array" << endl;
    int fifth[10] = {2, 3};
    // sizeof(arrayname)/sizeof(datatype of array)
    int fifthSize = sizeof(fifth) / sizeof(int);
    // int fifthSize=aSize(fifth);
    cout << "size of fifth is " << fifthSize << endl;

    // sizeof(arrayname)/sizeof(datatype of array)
    // int fifthSize=sizeof(fifth)/sizeof(int);
    // problem in above: in case if array contains only few values like fifth containing 2 and 3, and rest of values in array are intialised as 0, then in such case we wont be able to find actual size, even if we want to work with reak values not those 0s

    return 0;
}