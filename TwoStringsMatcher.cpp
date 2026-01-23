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

int find(string s,string p){
  int i=0,j=0;
  vector<int>LPS=LPSfinder(p);
  while(i<s.length()){
    if(s[i]==p[j]){
      i++,j++;
      if(j==m){
        return abs(j-i);
    } else{
        if(j==0){
          i++;
        } else {
          j=LPS[j-1];
      }
  }
      return -1;
}
