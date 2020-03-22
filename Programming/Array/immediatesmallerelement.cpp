#include <bits/stdc++.h>
using namespace std;



int ismall(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return arr[i+1];
        }
        else
        return -1;
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
        cout<<ismall(arr,n);

	}
	  
	return 0;
}