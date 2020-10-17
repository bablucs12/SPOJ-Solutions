#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
#define str string 
#define ll long long int 

int arr[MAX];

int main()
{
    ll k,l,m,i;
    cin>>k>>l>>m;
  
    ll arr1[m];
    for( i=0;i<m;i++)
        cin>>arr1[i];
    arr[0]=0;
    for( i=1;i<MAX;i++)
    {
        if(i-k>=0 && arr[i-k]==0)
            arr[i]=1;
        if(i-l>=0 && arr[i-l]==0)
            arr[i]=1;
        
        if(i-1>=0 && arr[i-1]==0)
            arr[i]=1;
    }
    
    for( i=0;i<m;i++)
    {
        if(arr[arr1[i]]==1)
            cout<<"A";
        
        else
            cout<<"B";
    }
}
