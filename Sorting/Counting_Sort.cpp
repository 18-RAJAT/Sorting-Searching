#include<iostream>
using namespace std;

void countSort(int arr[],int n)
{
    
    int k = arr[0];
    for(int i=0;i<n;++i)
    {
        k = max(k,arr[i]);
    }

    int count[10] = {0};

    for(int i=0;i<n;++i)
    {
        count[arr[i]]++;
    }

    for(int i=1;i<=k;++i)
    {
        count[i] += count[i-1];
    }

    int answer[n];

    for(int i=n-1;i>=0;--i)
    {
        answer[--count[arr[i]]] = arr[i];
    }

    for(int i=0;i<n;++i)
    {
        arr[i] = answer[i];
    }

}

int main()
{
    int arr[] = {1,2,3,4,7,6,8,5};
    
    countSort(arr,8);
    for(int i=0;i<8;++i)
    {
        cout<<"Sorted order is :"<<arr[i]<<endl;
    }
}

