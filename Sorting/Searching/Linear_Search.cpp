#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
   for(int i=0;i<size;++i)
   {
       if(arr[i] == key)
       {
           return true;
       }
   }

   return false;
}

int main()
{
    int arr[10] = {1,2,5,4,3,9,8,6,7};

    cout<<"Enter the element to search for: ";

    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if(found)
    {
        cout<<"Key is PRESENT\t -> TRUE"<<endl;
    }

    else
    {
        cout<<"Key is NOT PRESENT\t FALSE"<<endl;
    }
}