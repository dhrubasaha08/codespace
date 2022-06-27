/**************************************************
Name:           Dhruba Saha
Roll No:        B.Sc(Sem-IV)-04
Program No:     13B
Program Name:   Write a C program to implement DFS
**************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct Graph
{
    int numVertices;
    int *visited;

    struct node **adjLists;
};

struct node *createNode(int v);
struct Graph *createGraph(int vertices);
void dfs(struct Graph *graph, int vertex);
void addEdge(struct Graph *graph, int src, int dest);
void printGraph(struct Graph *graph);

void main()
{
    /*int data, choice;
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        while (1)
        {
            printf("Enter your choice:\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the data:\n");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter the data:\n");
                scanf("%d", &data);
                root = delete (root, data);
                break;
            case 3:
                printf("Display\n");
                inorder(root);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice\n"); */
    struct Graph *graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    printGraph(graph);

    dfs(graph, 2);
}

struct node *createNode(int v)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph *createGraph(int vertices)
{
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node *));

    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

void dfs(struct Graph *graph, int vertex)
{
    struct node *adjList = graph->adjLists[vertex];
    struct node *temp = adjList;

    graph->visited[vertex] = 1;
    printf("Visited %d \n", vertex);

    while (temp != NULL)
    {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex] == 0)
        {
            dfs(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

void addEdge(struct Graph *graph, int src, int dest)
{
    struct node *newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

void printGraph(struct Graph *graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node *temp = graph->adjLists[v];
        printf("\n Adjacency list of vertex %d\n ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}