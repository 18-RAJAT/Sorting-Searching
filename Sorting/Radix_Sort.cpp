#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[],int n)
{
    //Create a empty bucket of  size n
    vector<float>bucket[n];

    //Put bucket elements in diff.buckets
    for(int i=0;i<n;++i)
    {
        int res = n * arr[i];//Index into the bucket

        bucket[res].push_back(arr[i]);
    }

    int index = 0;

    for(int i=0;i<n;++i)
    {
        for(int j=0;i<bucket[i].size();++j)
        {
            arr[index++] = bucket[i][j]; 
        }
    }
}

int main()
{
    float arr[] = {0.112,2.223,9.321,0.212};

    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr,n);

    cout<<"Sorted order is "<<endl;

    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}