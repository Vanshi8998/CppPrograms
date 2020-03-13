#include<bits/stdc++.h>
using namespace std;


int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){

    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    cout<<sum(arr,n);

    return 0;
}
