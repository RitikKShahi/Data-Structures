//pattern Sigma(A[i]-X)---->Minimize----->Median
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
signed main(){
    ll n;
    cin>>n;
    vector<ll>ip(n);
    for(ll i=0;i<n;i++){
        cin>>ip[i];
    }
    ll len;
    sort(ip.begin(),ip.end());
    if(n%2==0){
        len=ip[(n/2)-1];
    }else{
        len=ip[n/2];
    }
    ll sum=0;
    for(auto x:ip){
        sum+=abs(x-len);
    }
    cout<<sum<<endl;
    return 0;
}
