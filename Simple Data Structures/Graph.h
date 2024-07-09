#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef GRAPH_H_
#define GRAPH_H_

class Edge{
public:
    int src, dest, weight;
    Edge(int src, int dest, int weight){
        this->src = src;
        this->dest = dest;
        this->weight = weight;
    }
    std::string toString(){
        return "<" + std::to_string(src) + ", " + std::to_string(dest) + ", " + std::to_string(weight) + ">";
    }
};

class Graph{
public:
    int numVertices;
    std::vector<std::vector<Edge>> adjList;
    Graph(){
        numVertices = 0;
    }
    ~Graph(){
    }
};

#endif /* GRAPH_H_ */