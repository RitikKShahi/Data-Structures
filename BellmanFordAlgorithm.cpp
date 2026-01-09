//Pseudo code

//Suppose there are n vertices 
//Running a loop for the n-1 times
//Relax all the edges in every ith time 

/*
    edges matrix------------------>vector<vector<int>>edges; 
    edges matrix[0]example-------->edges[0]={u,v,wt};
    Run for N-1 times
        for(auto x:edges){
            int u =x[0];
            int v =x[1];
            int wt=x[2];
            if(dist[u]!=1e9 && dist[u]+wt<dist[v]){
                dist[v]=dist[u]+wt;
            }
        }
*/