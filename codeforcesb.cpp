#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ip(n);
        for(int i=0;i<n;i++) cin>>ip[i];
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            int maxm=0,minm=0;
            for(int j=i+1;j<n;j++){
                if(ip[i]>ip[j]){
                    maxm++;
                }
                if(ip[i]<ip[j]){
                    minm++;
                }
            }
            if(maxm>minm){
                result[i]=maxm;
            }else{
                result[i]=minm;
            }
        }
        for(int i=0;i<n;i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}