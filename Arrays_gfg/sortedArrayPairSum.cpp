//Q.Given a sorted and rotated array, find if there is a pair with a given sum

#include <iostream>
using namespace std;

int main()
{
    int n,s,no;
    cout<<"enter sum to be searched"<<endl;
    cin>>no;
    cout<<"enter number of elements";
    cin>>n;
	int Ar[7];
	for(int i=0 ; i<n;i++)
	{
	    cin>>Ar[i];
	}
	for(int j=0;j<n;j++)
	{
	   for(int k=0;k<n;k++)
	   {
	       s=Ar[j]+Ar[k];
	       if(s==no)
	       {
	           cout<<"There is a pair"<<"("<<Ar[j]<<","<<Ar[k]<<")";
	       }
	       break;
	   }
	}
	
   
   return 0;
}