#include <bits/stdc++.h>
using namespace std;
 

int findRepeatingElement(int arr[],int size)
{
    int low = 0;
    int high = size-1;
  
    while(low <= high)
    {
        int mid = (low + high)/2;

       if(arr[mid] <= mid)
       {
           high = mid - 1;
       }

       else
       {
           low = mid + 1;
       }
    }
    return low;
}


int main(int argc, const char** argv) {

     int arr[] = {1, 2, 3, 3, 4, 5};

     int n = sizeof(arr)/sizeof(arr[0]);

     int idx = findRepeatingElement(arr,n);

     if(idx != -1)
     {
         cout<<arr[idx]<<endl;
     }

    return 0;
}