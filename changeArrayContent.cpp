//Q.Given an array of size n where all elements are distinct and in range from 0 to n-1, change contents of arr[] so that arr[i] = j is changed to arr[j] = i. 

#include <iostream>
using namespace std;

int main() 
{
    int n,i,j,arr[100],ar[100];
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the elements from 0 to n-1";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

          for(j=0;j<n;j++)
          {
              ar[arr[j]] = j;
          }
    cout<<"resultant array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i];
    }
} 