//Divide and conquer algorithm...!!

#include<iostream>
using namespace std;

//Swap function
void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int comparisions = 0;
int swp=0;
//Partition function
int partition(int arr[],int left,int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for(int j = left;j<right;j++)
    {
        comparisions++;
        if(arr[j] < pivot)
        {
            i++;
            swap(arr,i,j);
            swp++;
        }
    }

   swap(arr,i+1,right);
   return i+1;

}


void QuickSort(int arr[],int left,int right)
{
    if(left < right)
    {
        int pivot = partition(arr,left,right);
        QuickSort(arr,left,pivot-1);
        QuickSort(arr,pivot+1,right);
    }
}


int main()
{
   int arr[10] = {2,1,3,9,7,6,0,22,10,32};

	QuickSort(arr,0,9);

	for(int i=0;i<9;++i)
	{
		cout<<"Sorted order is :"<<arr[i]<<endl;
	}
    cout<<endl;

    cout<<"No of comparisions is ::"<<comparisions<<endl;

    cout<<endl;
    
    cout<<"No of swaps are ::"<<swp<<endl;
}