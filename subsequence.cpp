#include <bits/stdc++.h>
using namespace std;
void search(int k,vector<int>&arr,vector<int>&subsequence,int n){
    if (k == n) {
    for(int i=0;i<subsequence.size();i++){
        cout<<subsequence[i]<<" ";
    }
    cout<<"\n";
    } else {
    search(k+1,arr,subsequence,n);
    subsequence.push_back(arr[k]);
    search(k+1,arr,subsequence,n);
    subsequence.pop_back();
}
}
int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>subsequence;
    search(0,arr,subsequence,5);
}