#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

//グラフ
//隣接リスト表現
using Graph = vector<vector<int>>;

//「重み付きの辺」を表す構造体Edge
//重みを表す型をlong long型とする
struct Edge{
    int to; //隣接頂点番号
    ll w; //重み
    Edge(int to, ll w) : to(to), w(w) {}

    //この時生成するグラフは、各頂点の隣接リストを辺集合で表すこと。
    //using Graph = vector<vector<Edge>>;
};


//ヒープの実装
struct Heap{
    vector<int> heap;
    Heap() {}

    //ヒープに値xを挿入
    void push(int x){
        heap.push_back(x);  //最後尾に挿入
        int i = (int)heap.size() - 1; //挿入された頂点番号
        while (i > 0)
        {
            int p = (i - 1)/2;  //親の頂点番号
            if(heap[p] >= x) break;  //逆転が無ければ終了
            heap[i] = heap[p]; //自分の値を親の値にする
            i = p;  //自分は上にいく
        }
        heap[i] = x;  //xは最終的にこの位置に持ってくる
    }

    //最大値をしる
    int top(){
        if(!heap.empty()) return heap[0];
        else return -1;
    }

    //最大値を削除
    void pop(){
        if(!heap.empty()) return;
        int x = heap.back(); //頂点に持ってくる値
        heap.pop_back();
        int i = 0; //根から下していく
        while (i*2 + 1 < (int)heap.size())
        {
            //子頂点同士を比較して大きい方をchild1とする
            int child1 = i*2 + 1, child2 = i*2 + 2;
            if(child2 < (int)heap.size() && heap[child2] > heap[child1]){
                child1 = child2;
            }
            if(heap[child1] <= x) break; //逆転が無ければ終了
            heap[i] = heap[child1];
            i = child1; //自分は下に行く
        }
        heap[i] = x; //xは最終的にはこの位置に戻ってくる
    }
};

int main(){
    return 0;
}