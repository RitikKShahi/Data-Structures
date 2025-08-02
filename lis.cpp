#include <bits/stdc++.h>
using namespace std;
int lis(vector<int>&ip,int i){
    int ans=1;
    for(int j=0;j<i;j++){
        if(ip[i]>ip[j])
        ans=max(ans,lis(ip,j)+1);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>ip(n);
    for(int i=0;i<n;i++)
    cin>>ip[i];
    vector<int>lisp(n,-1);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,lis(ip,i));
        lisp[i]=ans;
    }
    for(int i=0;i<n;i++){
        cout<<lisp[i]<<" ";
    }
    cout<<endl;
}
