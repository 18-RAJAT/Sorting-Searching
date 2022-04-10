#include<iostream>
using namespace std;

int main()
{
    int i,middle,n,key,arr[100];
    
    cout<<"Enter the elements"<<endl;
    cin>>n;

    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;++i)
    cin>>arr[i];

    cout<<"Enter the value you want to find"<<endl;
    cin>>key;

    int start = 0;
    int end = n-1;

    middle = start + (end - start)/2;

    while(start <= end)
    {
        if(arr[middle] < key)
        {
            start = middle + 1;
        }

        else if(arr[middle] == key)
        {
            cout<<"Found at location is";
            // cin>>key>>mid+1;
            break;
        }

        else{
            end = middle - 1;

            middle = start + (end - start)/2;
        }

        if(start > end)
        {
            cout<<"Element not found" << key<<middle + 1<<endl;
        }

        return 0;
    }

}