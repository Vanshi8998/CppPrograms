#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000

int multMat (int M1[SIZE][SIZE],int M2[SIZE][SIZE],int row1,int col1,int row2,int col2)
{   int qwe;
    if(col1!=row2)
    {
        qwe=-1;
    }
    return col1;
     
}

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 
    int row1, col1,row2,col2;
    cin>>row1>>col1;
    cin>>row2>>col2;
    int M1[SIZE][SIZE];
    int M2[SIZE][SIZE];
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>M1[i][j];
        }
    }
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>M2[i][j];
        }
    }
    cout<<multMat(M1,M2,row1,col1,row2,col2);
}