// Create the adjacency list 
//vector<vector<pair<int,int>>>adj
// u--->{v1,w1},{v2,w2} and so on....

//Create a Priority Queue(MIN HEAP) and push ({0,src})
//Create a distance vector and initialise everything to INT_MAX and the distance[src]=0

//Now run while loop(!PRIORITY_QUEUE.empty())
            /*
                auto temp=pq.top();
                pq.pop();
                for(auto v:adj[temp.second]){
                    if(v.second+temp.first<distance[v.first]){
                        distance[v.first]=v.second+temp.first;
                        pq.push({v.second+temp.first,v.first});
                    }
                }
            */