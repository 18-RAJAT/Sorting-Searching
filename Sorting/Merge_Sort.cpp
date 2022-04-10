#include <iostream>
using namespace std;

//Here k is main array index 

void merge(int *arr,int start,int end)
{
   int mid = start + (end - start)/2;

   int length1 = mid - start + 1;
   int length2 = end - mid;

   //2 array create
   int *first = new int[length1];
   int *second = new int[length2];

   //copy values
   int k = start;

   //1st array k lie
  for(int i=0;i<length1;++i)
  {
      first[i] = arr[k++];
  }

  //2nd array k lie
  for(int i=0;i<length2;++i)
  {
      second[i] = arr[k++];
  }

  //merge same as merge 2 sorted arrays

  int index1 = 0;
  int index2 = 0;

  k = start;

  while(index1 < length1 and index2 < length2)
  {
      if(first[index1] < second[index2])
      {
          arr[k++] = first[index1++];
      }

      else
      {
          arr[k++] = second[index2++];
      }
  }

  while(index1 < length1)
  {
      arr[k++] = first[index1++];
  }


    while(index1 < length2)
  {
      arr[k++] = first[index2++];
  }

}


void  mergeSort(int *arr,int start,int end)
{
    //Base case
    if(start >= end)
    {
        return;
    }

    int mid = start + (end - start)/2;

    //Left Part sort
    mergeSort(arr,start,mid);

    //Right part sort
    mergeSort(arr,mid+1,end);

    //Merge
    merge(arr,start,end);
}



int main()
{
    int arr[5] = {2,3,1,8,4};
    int n = 5;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;++i)
    {
        cout<<"Array is"<<arr[i]<<endl;
    }

    return 0;
}