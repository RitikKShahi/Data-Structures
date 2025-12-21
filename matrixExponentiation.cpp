#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>multiply(vector<vector<int>>&a,vector<vector<int>>&b){
    vector<vector<int>>result(2,vector<int>(2,1));
    result[0][0]=a[0][0]*b[0][0] + a[0][1]*b[1][0];
    result[0][1]=a[0][0]*b[0][1] + a[0][1]*b[1][1];
    result[1][0]=a[1][0]*b[0][0] + a[1][1]*b[1][0];
    result[1][1]=a[1][0]*b[0][1] + a[1][1]*b[1][1];
    return result;
}
vector<vector<int>>matrixExponentiate(vector<vector<int>>&vec,int n){
    if(n==0){
        vector<vector<int>>vec1(2,vector<int>(2,0));
        int size=vec1.size();
        vec1[0][0]=1,vec1[0][1]=0,vec1[1][0]=0,vec1[1][1]=1;
        return vec1;
    }
    vector<vector<int>>temp=matrixExponentiate(vec,n/2);
    vector<vector<int>>result=multiply(temp,temp);
    if(n%2!=0){
        result=multiply(result,vec);
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>vec={{1,1},{1,0}};
    vector<vector<int>>result=matrixExponentiate(vec,n);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
