#include <iostream>
using namespace std;

//code to find the index of in a given number from a arrays

int binary(int arr[], int size, int num)
{

    int start = 0;
    int end = size - 1;
int mid;
    mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == num)
        {

            return mid;
        }

        if (arr[mid] < num)
        {

            // go right
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr1[5] = {2,5,7,8,25};
    int arr2[4] = {33, 6, 7, 13};

    
int index = binary(arr1,5,8);

   cout<< "index is"<< index;

    return 0;
}
