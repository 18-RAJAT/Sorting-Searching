#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of array::";
    cin>>n;

    int arr[n],count=0;
    
    for(int i=0;i<n;++i)
    {
        cout<<"array is::";
        cin>>arr[i];
    }

    for(int i=1;i<n;++i)
    {
        int current = arr[i];
        int j = i-1;
      
      //compare
      while(arr[j] > current)
      {
          arr[j+1] = arr[j];
          j--;
      }
      count++;
      //J k aage vale m 
      arr[j+1] = current;
    }
    cout<<"Number of comparision \t"<<count<<endl;
    //Printing
    for(int i=0;i<n;++i)
    {
        cout<<"Sorted array is::";
        cout<<arr[i]<<endl;
    }
}




//Source code from LEETCODE
Insertion sort

	// insertionSort(nums);
	void insertionSort(vector<int>& nums){
        if(nums.size() == 0 || nums.size() == 1) return;
        for(int i = 1; i < nums.size(); i++){
            int tmp = nums[i];
            int j = i - 1;
            while(j >= 0 && nums[j] > tmp){
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = tmp;
        }
    }