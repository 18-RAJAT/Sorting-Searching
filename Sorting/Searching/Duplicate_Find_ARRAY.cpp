#include<iostream>
using namespace std;

int main()
{
     int n;
    cout<<"Enter the size of ARRAY:"<<endl;
    cin>>n;
    
    int arr[n],occurr=0;
    
    for(int i=0;i<n;++i)
    {
        cout<<"Unsorted array is::";
        cin>>arr[i];
    }

    cout<<"Duplicate values are:"<<endl;

    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i] == arr[j])
            {
                occurr++;
                cout<<arr[i]<<endl;
            }
        }
    }
    cout<<"No of occurences are : "<<occurr<<endl;
}