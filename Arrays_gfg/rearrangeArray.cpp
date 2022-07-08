//Q.Given an array of elements of length N, ranging from 0 to N-1, your task is to write a program that rearranges the elements of the array. All elements may not be present in the array, if the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i and if i is not present, display -1 at that place.

#include <iostream> 

using namespace std;

int* Rearrange (int *arr, int n);
int main() 
{
int t;
cin>>t; 
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i = 0 ;i<n; i++)
{
cin>>a[i];
}
int *b= Rearrange (a, n) ; 
for (int i = 0 ;i<n;i++) 
{
cout << b[i] <<" ";
}
cout << endl;

}
}
int * Rearrange(int *arr,int n)
{
    int i,j;
    static int ar[100]; 
    for(i = 0;i < n;i++)
    {
	   for(j=0;j<n;j++)
    	{
    		if(i==arr[j])
    		        	{
    		        	   ar[i] = arr[j];
    		        	   break;
    		        	}
    		        }
    		        
    		    }
    		    for(int x = 0;x<n;x++)
    		    {
    		    	if(arr[x] == 0)
    		    	{
    		    		for(int k = 1;k<n;k++)
    	    		    {
    	    		    	if(ar[k] == 0)
    	    		    	{
    	    		    		ar[k] = -1;
    	    		    	}
    	    		    }
    		    	}
    		    	else
    		    	{
    		    		for(int k = 0;k<n;k++)
    	    		    {
    	    		    	if(ar[k] == 0)
    	    		    	{
    	    		    		ar[k] = -1;
    	    		    	}
    	    		    }
    		    	}
    		    }
    		    
    		    
    		   return ar;
    		    }