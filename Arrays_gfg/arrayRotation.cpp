//Q. Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 


#include <iostream>
using namespace std;

int main()
{
   int n,d;
	int arr[100];
	int temp[50];
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"enter the size by which the array has to be rotated"<<endl;
	cin>>d;
	cout<<"enter elements"<<endl;
	for(int i = 0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int j=0;j<=d-1;j++) //storing the first d ele in temp array
	{
	   
	   temp[j] = arr[j];
	
	 }  
	
	for(int k=d;k<n;k++) //shifting the elements
	{
	    arr[k-2] = arr[k];
	}
	for(int j=d,x=0;j<n-1;j++,x++) 
	{
	    
	    arr[j+1] = temp[x];
	    
	}
	cout<<"rotated array"<<endl;
	for(int y=0;y<n;y++)
	{
	    cout<<arr[y];
	}
   
   return 0;
}