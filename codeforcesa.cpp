#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long>ip(n);
        for(long long i=0;i<n;i++) cin>>ip[i];
        sort(ip.begin(),ip.end());
        long long res=c;
        long long temp=c;
        for(long long i=0;i<n;i++){
            if(temp>=ip[i]){
                res+=ip[i];
                long long cost=temp-ip[i];
                if(k>cost){
                    res+=cost;
                    k-=cost;
                    temp=res;
                }else if(k<=cost){
                    res+=k;
                    temp=res;
                    k=0;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}