#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>parent,rank,size;
    public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            size.resize(n+1,1);
            parent.resize(n+1,0);
            for(int i=0;i<n+1;i++){
                parent[i]=i;
            }
        }
        int findUPar(int node){
            if(node==parent[node]){
                return node;
            }
            return parent[node]=findUPar(parent[node]);
        }
        void UnionByRank(int u,int v){
            int ultimatePU=findUPar(u);
            int ultimatePV=findUPar(v);
            if(ultimatePU==ultimatePV){
                return;
            }
            if(rank[ultimatePU]<rank[ultimatePV]){
                parent[ultimatePU]=ultimatePV;
            } else if(rank[ultimatePU]>rank[ultimatePV]){
                parent[ultimatePV]=ultimatePU;
            } else{
                parent[ultimatePU]=ultimatePV;
                rank[ultimatePV]++;
            }
        }
};
int main(){
    // DisjointSet dsu= new DisjointSet(7);
    DisjointSet dsu(7);
    dsu.UnionByRank(1,2);
    dsu.UnionByRank(2,3);
    dsu.UnionByRank(4,5);
    dsu.UnionByRank(6,7);
    dsu.UnionByRank(5,6);
    dsu.UnionByRank(3,7);
    if(dsu.findUPar(3)==dsu.findUPar(5)){
        cout<<"Same"<<endl;
    }
    else {
        cout<<"Different"<<endl;
    }

}
