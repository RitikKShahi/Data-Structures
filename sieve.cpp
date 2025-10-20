#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int n=1e5 +10;
vector<bool>isPrime(n,1);
void setter(){
  isPrime[0]=isPrime[1]=0;
  for(int i=2;i<n;i++){
      if(isPrime[i]){
      for(int j=2*i;j<n;j++){
          isPrime[j]=false;
      }
    }
  }
}
int main(){
  setter();
  return 0;
}
        
