#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int dp[105][105];
int v[105];
int wt[105];
int fun(int idx , int WT){
    if(idx<0 || WT<=0){
        return 0;
    }

    if(dp[idx][WT]!=-1) return dp[idx][WT];
    int ans = fun(idx-1,WT);


    if(wt[idx]<=WT){
        
        ans = max ( ans , fun(idx-1,WT-wt[idx])+v[idx]);
    }
    dp[idx][WT]=ans;
    return ans;
}


int main(){
    memset(dp,-1,sizeof(dp));
    int n ; 
    int     WT;
    cin>>n>>WT;

    for(int i=0;i<n;i++){
    
            cin>>v[i]>>wt[i];
    
    }
    int ans = fun(n-1,WT);
    cout<<ans;
}