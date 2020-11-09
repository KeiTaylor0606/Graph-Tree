#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//「重み付きの辺」を表す構造体Edge
//重みを表す型をlong long型とする
struct Edge{
    int to; //隣接頂点番号
    ll w; //重み
    Edge(int to, ll w) : to(to), w(w) {}
};

//各頂点の隣接リストを、辺集合で表す
using Graph = vector<vector<Edge>>;

int main(){
    //頂点数と辺数
    int N, M;
    cin >> N >> M;

    //グラフ
    Graph G(N);
    for(int i = 0; i < M; i++){
        int a, b;
        ll w;
        cin >> a >> b >> w;
        G[a].push_back(Edge(b, w));
    }
    return 0;
}