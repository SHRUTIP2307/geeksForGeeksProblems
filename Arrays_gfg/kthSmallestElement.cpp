//Q.Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
 int kthSmallest(int arr[], int l, int r, int k) 
    {
        for(int i = 0;i<=r;i++)
        {
            for(int j=l;j<r;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
         }   }
        
        int kth = arr[k-1];
        return kth;
    }
}