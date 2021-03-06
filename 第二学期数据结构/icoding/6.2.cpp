#include <stdio.h>
#include "graph.h" //请勿删除，否则检查不通过

typedef int VertexType;

typedef enum
{
    DG,
    UDG
} GraphType;

typedef struct ArcNode
{
    int adjvex;
    InfoPtr *info;
    struct ArcNode *nextarc;

} ArcNode;

typedef struct VNode
{
    VertexType data;
    ArcNode *firstarc;
} VNode;
typedef struct
{
    VNode vertex[MAX_VERTEX_NUM];
    int vexnum, arcnum;
    GraphType type;
} ListGraph;

int locate_vertex(ListGraph *G, VertexType v); //返回顶点 v 在vertex数组中的下标，如果v不存在，返回-1
bool insert_vertex(ListGraph *G, VertexType v)
{
    if (locate_vertex(G, v) != -1 || G->vexnum + 1 >= MAX_VERTEX_NUM)
    {
        return false;
    }
    G->vertex[G->vexnum].firstarc = NULL;
    G->vertex[G->vexnum].data = v;
    G->vexnum++;
    return true;
}

bool insert_arc(ListGraph *G, VertexType v, VertexType w)
{
    int V = locate_vertex(G, v), W = locate_vertex(G, w);
    if (W == -1 || V == -1)
    {
        return false;
    }

    return true;
}