#include <bits/stdc++.h>
using namespace std;
int n=5;
vector<bool>chosen(5,false);
vector<int>permutation;
void search(){
    if(permutation.size()==n){
        for(int i=0;i<n;i++){
            cout<<permutation[i]<<" ";
        }
        cout<<"\n";
    } else{
        for (int i = 0; i < n; i++) {
        if (chosen[i]) 
        continue;
        chosen[i] = true;
        permutation.push_back(i);
        search();
        chosen[i] = false;
        permutation.pop_back();
        }
    }
}
int main(){
    search();
}