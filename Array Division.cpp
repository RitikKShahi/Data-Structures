#include <bits/stdc++.h>
using namespace std;
long long n;
bool check(vector<long long>&nums,long long k,long long mid){
    long long p=1;
    long long sum=0;
    for(long long i=0;i<n;i++){
        if(sum+nums[i]<=mid){
            sum+=nums[i];
        }else{
            sum=nums[i];
            p++;
        }
    }
    if(p>k) return false;
    return true;
}
long long solve(vector<long long>&nums,long long k){
    n=nums.size();
    long long lb=*max_element(nums.begin(),nums.end());
    long long rb=accumulate(nums.begin(),nums.end(),0LL);
    while(lb<=rb){
        long long mid=lb+(rb-lb)/2;
        if(check(nums,k,mid)){
            rb=mid-1;
        }else{
            lb=mid+1;
        }
    }
    return lb;
}
signed main(){
    //similar to the Split array Largest Sum on leetcode
    long long n,k;
    cin>>n>>k;
    vector<long long>ip(n);
    for(long long i=0;i<n;i++) cin>>ip[i];
    //function create
    cout<<solve(ip,k)<<endl;
    return 0;
}
