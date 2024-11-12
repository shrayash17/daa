#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(vector<int>&a,vector<int>&b){
    double x = a[0]/a[1];
    double y = b[0]/b[1];

    return x>y;
}
int fun(vector<vector<int>>&res,int wt){
    int i=0;
    int ans=0;
    while(res[i][1]<=wt){
        ans+=res[i][0];
        wt-=res[i][1];
        i++;
    }
    if(wt>0){
        ans+= wt*(res[i][0]/res[i][1]);
    }
    return ans;
}
int main(){
    vector<vector<int>>res;
    int n ;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"value , weight of"<<i<<"item : ";
        vector<int>v;
        for(int j=0;j<2;j++){
            int x ; 
            cin>>x;
            v.push_back(x);
        }
        res.push_back(v);
    }
    sort(res.begin(),res.end(),cmp);


    for(vector<int>x:res){
        for(int y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    cout<<fun(res,20);
}