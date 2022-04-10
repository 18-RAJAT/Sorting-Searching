#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Size of Array is "<<endl;
    cin>>n;

     int arr[n],comparision = 0,swaps=0;
    for(int i=0;i<n;++i)
    {
        cout<<"Elements "<<endl;
        cin>>arr[i];
    }

    int counter = 1;

    while(counter < n)
    {
        for(int i=0;i<n-counter;++i)
        {
            comparision++;
            if(arr[i] > arr[i+1])
            {
                //swapping
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                swaps++;
            }
        }

        counter++;
    }

    
    for(int i=0;i<n;++i)
    {
        cout<<"sorted order is "<<arr[i]<<endl<<endl;
    }
     cout<<"No of comparision is ->"<<comparision<<endl;
    cout<<endl;

    cout<<"No of swaps is -> "<<swaps<<endl;
}
