#include <iostream>

using namespace std;

sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int main()
{

    int arr[5] = {3, 7, 1, 9, 20};

    sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}