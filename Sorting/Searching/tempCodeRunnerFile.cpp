#include<iostream>
using namespace std;

class KthLargestSmallest
{
    private:
    int arr[30],n,k,l;

    public:
    void accept();
    void find();
};

void KthLargestSmallest::accept()
{
    int i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    cout<<"Enter the array elements"<<endl;

    for(int i=0;i<n;++i)
        cin>>arr[i];

    cout<<"Enter the value of K : \t"<<endl;
    cin>>k;

    cout<<"Enter 1 for Kth larget and 0 for Kth smallest find :"<<endl;
    cin>>l;
}

//finding kth larget and minimum

void KthLargestSmallest::find()
{
    int i,j,temp;

    //Sort 
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }

    //Sorted list now->
    for(int i=0;i<n;++i)

      cout<<"Sorted list is"<<arr[i]<<endl;

      //Finding kth largest element is
      if(l == 1)
      {
          //pointing the kth largest element
          for(int i=n-1;i>=n-k;--i)
          {
              cout<<"The"<<k<<"th larest element is:"<<arr[i+1]<<endl;
          }
      }

      else
      {
          //pointing the kth smallest element 

          for(int i=0;i<k;++i);
          cout<<"The"<<k<<"th smallest element is:"<<arr[i+1]<<endl;
      }
}

int main()
{
    KthLargestSmallest K;

    //calling function
    K.accept();
    K.find();
}