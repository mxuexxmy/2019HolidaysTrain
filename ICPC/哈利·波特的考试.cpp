//
// Created by longxing on 19-7-29.
//

#include <bits/stdc++.h>
using namespace std;
//边的定义
#define  MaxVertexNUm 100
#define  INF 0x3f3f3f3f
typedef  struct ENode {
    int v1, v2;  //有向边<v1,v2>
    int w; //权值

}Edge;

typedef  struct GNode{
    int Nv;  /*顶点数*/
    int Ne; /*边数*/
    int G[MaxVertexNUm][MaxVertexNUm]; /*邻接矩阵*/
}MGraph;

void Floyd(MGraph Graph, int D[][MaxVertexNUm]){
    /*
     * 初始化
     */
    for (int i = 0; i < Graph.Nv; ++i) {
        for (int j = 0; j < Graph.Nv; ++j) {
            D[i][j] = Graph.G[i][j];
        }
    }

    for (int k = 0; k < Graph.Nv; ++k) {
        for (int i = 0; i < Graph.Nv; ++i) {
            for (int j = 0; j < Graph.Nv; ++j) {
                if(D[i][k] + D[k][j] < D[i][j]){
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }

}
/*
 * 建图
 */
MGraph CreateGraph(int VertexNum){
   int V, W;
    MGraph Graph;

    Graph.Nv = VertexNum;
    Graph.Ne = 0;

    for (int i = 0; i < Graph.Nv; ++i) {
        for (int j = 0; j < Graph.Nv; ++j) {
            Graph.G[i][j] = INF;
        }
    }
    return Graph;
}

void InsertEdge(MGraph Graph, Edge E){
    Graph.G[E.v1][E.v2] = E.w;
    Graph.G[E.v2][E.v1] =E.w;
 }

 MGraph BuildGraph(){
    MGraph Graph;
    Edge E;
    int Nv;

    scanf("%d", &Nv); /*读入顶点的个数*/
    Graph = CreateGraph(Nv);
    scanf("%d", &Graph.Ne);
    if(Graph.Ne != 0){
        for (int i = 0; i < Graph.Ne; ++i) {
            scanf("%d %d %d",&E.v1, &E.v2,&E.w);
            E.v1--;
            E.v2--;
            InsertEdge(Graph, E);

        }
    }
     return  Graph;
}
/*
 * 选择动物
 */
void FindAnimal(MGraph Graph){
    int D[MaxVertexNUm][MaxVertexNUm], Maxdist, MinDist;
    int Animal;
    Floyd(Graph, D);
    MinDist = INF;
    for (int i = 0; i < Graph.Nv  ; ++i) {

    }


}
int main(){

    MGraph G = BuildGraph();
    FindAnimal(G);

    return 0;
}