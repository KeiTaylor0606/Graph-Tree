#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main(){
    //頂点数と辺数
    int N, M;
    cin >> N >> M;

    //グラフ
    Graph G(N);
    for(int i = 0; i < N; i++){
        int a, b;
        cin>> a >> b;
        G[a].push_back(b); //頂点aは頂点bへの辺を持つ

        //無向グラフの場合は以下を追加
        //G[b].push_back(a):
    }
    return 0;
}