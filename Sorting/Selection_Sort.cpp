#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of ARRAY:"<<endl;
    cin>>n;
    
    int arr[n],comparisions=0;
    
    for(int i=0;i<n;++i)
    {
        cout<<"Unsorted array is::";
        cin>>arr[i];
    }
    
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
              comparisions++;   
        }
        
    }
    
    for(int i=0;i<n;++i)
    {
        cout<<"Sorted order :"<<arr[i]<<endl;
    }
    cout<<"Number of comparisions are -> "<<comparisions<<endl;
}