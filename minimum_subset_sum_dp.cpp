#include<bits/stdc++.h>
using namespace std;

int min_sub(int arr[],int n,int range)
{
    int t[n+1][range+1];

    for(int i=0;i<range+1;i++)
    {
        t[0][i]=0;
    }
    for(int i=0;i<n+1;i++)
    {
        t[i][0]=0;
    }
    vector<bool>v;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=range;j++)
        {
             if(arr[i-1]<=j)
             {
                t[i][j]=max(arr[i-1]+t[i-1][j-arr[i-1]],t[i-1][j]);

             }
            else{
                t[i][j]=t[i-1][j];
            }

        }
     }
     return t[n][range];
    
//     (int i=0;i<11;i++)
//     {
// for
        
//             if(t[4][i]==true)
//             {
//                 v.push_back(t[4][i]);
//             }
        
//     }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // int mn=INT_MAX;
    // for(int i=0;i<v.size();i++)
    // {
    //     mn=min(mn,(range-2*(v[i])));
    // }
    // return mn;


}
int main()
{
    int arr[]={1,6,11,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int range=0;
    for(int i=0;i<len;i++)
    {
        range=range+arr[i];
    }
    int s1= min_sub(arr,len,range/2);
    cout<<range-2*s1;
    return 0;
}