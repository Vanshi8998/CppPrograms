#include<bits/stdc++.h>
using namespace std;

// int largeNumber(int arr[],int n)
// {
//     int maximum=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>maximum){
//             maximum=arr[i];
//         }
//     }
//     return maximum;
// }
int largeNumber(int arr[],int n)
{
    int maximum=*max_element(arr,arr+n);
}
int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<largeNumber(arr,n);
}