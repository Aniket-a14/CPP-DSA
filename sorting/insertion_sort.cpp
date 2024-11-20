#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 6, 235, 664, 33, 65};

    for (int i = 4; i >= 0; i--)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}