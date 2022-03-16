#include<bits/stdc++.h>
#include<cstring>
using namespace std;

    int n=4;
    int w=7;
int knapsack(int wt[],int val[],int w,int n)
{
    int t[10][10];
    memset(t,-1,sizeof(t));
    if(n==0 || w==0)
    {
        return 0;
    }
    if(t[n][w]!=-1)
    {
        return t[n][w];
    }
    else if(wt[n-1]<=w)
    {
        return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else{
        return t[n][w]=knapsack(wt,val,w,n-1);
    }
}
int main()
{
    int wt[]={2,4,3,7};
    int val[]={1,3,4,2};
    cout<<knapsack(wt,val,w,n);

}
