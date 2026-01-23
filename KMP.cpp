vector<int> LPSfinder(string &s){
  int n=s.length();
  vector<int>LPS(n,0);
  int pre=0,suf=1;
  while(suf<n){
    if(s[suf]==s[pre]){
      LPS[suf]=pre+1
      suf++,pre++;
    } else {
      if(pre==0){
        LPS[suf]=0;
        suf++;
      } else{
        pre=LPS[pre-1];
      }
    }
  }
  return LPS;
}
