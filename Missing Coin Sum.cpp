#include <bits/stdc++.h>
using namespace std;
using ll=long long;
signed main(){
    ll n;
    cin>>n;
    vector<ll>ip(n);
    for(ll i=0;i<n;i++) cin>>ip[i];
    sort(ip.begin(),ip.end());
    ll lb=0,rb=0;
    for(ll i=0;i<n;i++){
        ll nlb=lb+ip[i];
        ll nrb=rb+ip[i];
        if(nlb<=rb){
            lb=min(lb,nlb);
            rb=nrb;
        }else if(nlb==rb+1){
            rb=nrb;
        }else{
            cout<<rb+1<<endl;
            return 0;
        }
    }
    cout<<rb+1<<endl;
    return 0;
}
