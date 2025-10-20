#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int n=1e5 +10;
vector<bool>isPrime(n,1);
vector<int>lp(n,0),hp(n,0);
void setter(){
  isPrime[0]=isPrime[1]=0;
  for(int i=2;i<n;i++){
      if(isPrime[i]){
        lp[i]=hp[i]=i;
      for(int j=2*i;j<n;j++){
          isPrime[j]=false;
          hp[j]=i;
          if(lp[j]==0){
            lp[j]=i;
          }
      }
    }
  }
}
int main(){
  setter();
  return 0;
}
        
