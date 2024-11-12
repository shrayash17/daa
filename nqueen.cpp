#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<string>>res;
int N;

bool valid(vector<string>&s,int r,int c){
    for(int i=r-1;i>=0;i--){
        if(s[i][c]=='Q'){
            return false;
        }
    }

    for(int i=r-1, j=c-1;i>=0 && j>=0;i--,j--){
        if(s[i][j]=='Q'){
            return false;
        }
    }
    for(int i=r-1, j=c+1;i>=0&&j<N;i--,j++){
        if(s[i][j]=='Q'){
            return false;
        }
    }
    return true;
}




void solve(vector<string>&s,int r){
    if(r>=N){
        res.push_back(s);
        return;
    }

    for(int i=0;i<N;i++){
        if(valid(s,r,i)){
            s[r][i]='Q';
            solve(s,r+1);
            s[r][i]='.';
        }
    }
}



int main(){
    int n ; 
    cin>>n;
    N=n;
    vector<string> s(n,string(n,'.'));
    solve(s,0);

    for(vector<string>x:res){
        for(string s : x){
            cout<<s<<endl;
        }
        cout<<endl;
    }
}