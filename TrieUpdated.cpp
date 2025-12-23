#include <bits/stdc++.h>
using namespace std;

struct Trie{
    vector<Trie*>container;
    bool flag;
    Trie(){
        container.resize(26,nullptr);
        flag=false;
    }
};

int main(){
    vector<string>input={"ritik","deban","raghvendra","babuji"};
    Trie *head=NULL;
    Trie *root=NULL;
    for(int i=0;i<input.size();i++){
        for(int j=0;j<input[i].size();j++){
            if(!head){
              head=new Trie();
              root=head;
              head->container[input[i][j]-'a']=new Trie();  
              head=head->container[input[i][j]-'a'];
              continue;
            } 
            if(!head->container[input[i][j]-'a']){
                head->container[input[i][j]-'a']=new Trie();
            }
            if(i==input[i].size()-1){
                head->flag=true;
            }
            head=head->container[input[i][j]-'a'];
        }
        head=root;
    }
    Trie* temp=root;
    while(temp){
        //Ab karunga search idhar======>Babuji
        string target="ritik";
        for(int i=0;i<target.size();i++){
            if(temp->container[target[i]-'a']){
                temp=temp->container[target[i]-'a'];
            } else {
                cout<<"Not found"<<endl;
                return 0;
            }
        }
        break;
    }
    cout<<"Found your Target successfully"<<endl;
}
