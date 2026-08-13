#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> key;

int k , counter=0;

void Search(int node,int parent , int x){

    x=x^key[node];
    if(x>=k){
    counter++;
    }

    for(int child : adj[node]){
        if(child!=parent){
            Search(child,node,x);
        }
    }

}
int main(){

    

    int n;
    cout << "Enter number of nodes and value of K: ";
    cin>>n>>k;


    key.resize(n+1);
    adj.resize(n+1);

        
    cout << "Enter " << n << " security keys: ";
    for(int i=1;i<=n;i++){
        cin>>key[i];
    }

    cout << "Enter " << n - 1 << " edges (u v):\n";
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    Search(1,0,0);
    cout << "Number of trusted servers: " << counter;
    

    return 0;

}