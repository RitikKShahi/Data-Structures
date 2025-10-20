#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int n=1e5 +10;
vector<bool>isPrime(n,1);
vector<int>hp(n,0);
void setter(){
  isPrime[0]=isPrime[1]=0;
  for(int i=2;i<n;i++){
      if(isPrime[i]){
        hp[i]=i;
      for(int j=2*i;j<n;j+=i){
          isPrime[j]=false;
          hp[j]=i;
      }
    }
  }
}
int main(){
  setter();
  int num;
  cin>>num;
  vector<int>its_prime;
  while(num>1){
    int prime_factor=hp[num];
    num/=prime_factor;
    its_prime.push_back(prime_factor);
  }
  for(int i=0;i<its_prime.size();i++){
    cout<<its_prime[i]<<" ";
  }
  cout<<"\n";
  return 0;
}
        
