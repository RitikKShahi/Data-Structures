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
    
    vector<char>input={'a','p','p','l','e'};
    Trie *head=NULL;
    Trie *root=NULL;
    for(int i=0;i<input.size();i++){
        if(!head){
          head=new Trie();
          root=head;
          head->container[input[i]-'a']=new Trie();  
          head=head->container[input[i]-'a'];
          continue;
        } 
        head->container[input[i]-'a']=new Trie();
        if(i==input.size()-1){
            head->flag=true;
        }
        head=head->container[input[i]-'a'];
    }
    while(root){
        bool flag=false;
        for(int i=0;i<26;i++){
            if(root->container[i]!=nullptr){
                cout<<char('a'+i)<<endl;
                root=root->container[i];
                flag=true;
                break;
            }
        }
        if(!flag) break;
    }
}
