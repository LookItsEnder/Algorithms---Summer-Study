/*
    Dijkstra's Algorithm is used to determine the shortest path between two points on a graph.
    Thus it is also referred to as the Shortest Path Algorithm




*/
#include <climits>
#include <queue>
#include "Graph.h"
#include "IOHelper.h"
#include "PriorityQueuePair.h"
using namespace std;

class Dijkstra: public Graph{
private: bool *closed;
public:
    int *distance, *parent;
    ~Dijkstra(){
    }
    Dijkstra(string &filePath){
        IOHelper io;
        Graph g = io.readWeightedGraph(filePath);        
        numVertices = g.numVertices;
        adjList = g.adjList;
    }
    
    void execute(int source){
        closed = new bool[numVertices];
        distance = new int[numVertices];
        parent = new int[numVertices];

        for (int i = 0; i < numVertices; i++){
            distance[i] = INT_MAX;
            parent[i] = -1;
            closed[i] = false;
        }
        distance[source] = 0;
        priority_queue<PriorityQueuePair, std::vector<PriorityQueuePair>, PriorityQueuePairComparitor> open;
        open.push(PriorityQueuePair(source,0));

        while(open.empty() == false){
            PriorityQueuePair minElement = open.top();
            open.pop();
            int minVertex = minElement.item;
            if(closed[minVertex]){
                continue;
            }
            closed[minVertex] = true;
            for(int i = 0; i < adjList.at(minVertex).size(); i++){
                int adjVertex = adjList.at(minVertex).at(i).dest;
                if(closed[adjVertex] == false){
                    int newDist = distance[minVertex] + adjList.at(minVertex).at(i).weight;
                    if(newDist < distance[adjVertex]){
                        distance[adjVertex] = newDist;
                        parent[adjVertex] = minVertex;
                        open.push(PriorityQueuePair(adjVertex, newDist));
                    }
                }
            }
        }
    }

    void printDistanceArray(){
        std::cout << "[";
        for(int i = 0; i < numVertices; i++){
            if(distance[i] == INT_MAX){
                cout << "infinity, ";
            }
            else{
                cout << distance[i] << ", ";
            }
        }
        if(distance[numVertices-1] == INT_MAX){
            cout << "infinity]";
        }        
        else{
            cout << distance[numVertices-1] << "]";
        }
    }    

    void printParentArray(){
        cout << "[";
        for(int i = 0; i < numVertices - 1; i++){
            cout << parent[i] << ", ";
        }
        cout << parent[numVertices - 1] << "[";
    }
};