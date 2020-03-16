#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int count=0;
    for(auto i:mp)
    {
        
        if(i.second > n/ 2) 
        { 
            count =1; 
            return i.first;
            break; 
        } 
    // if(count == 0) 
    //     cout << "No Majority element" << endl; 
    } 
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
    cout<<majorityElement(arr,n);
    
}