#include<iostream>
using namespace std;
class reverse
{
public:
    void reverse_array(int arr[], int n)
    {
        int start = 0;
        int end = n - 1;
        while(start < end)

        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        for(int i = 0; i < n; i++)
        {

            cout << arr[i] << " ";
        
        }
    }
};

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse r1;
    r1.reverse_array(arr, n);

    return 0;
}