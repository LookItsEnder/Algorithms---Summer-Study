#include "Graph.h"
#include <fstream>
#ifndef FILEREADER_H_
#define IOHELPER_H_
class IOHelper{
public:
    static Graph readWeightedGraph(std::string&filePath){
        std::ifstream fileReader;
        fileReader.open(filePath);
        Graph graph;
        fileReader >> graph.numVertices;
        graph.adjList.resize(graph.numVertices);
        for(int i = 0; i < graph.numVertices; i++){
            graph.adjList.push_back(std::vector<Edge>());
        }
        while(fileReader){
            int src, dest, weight;
            fileReader >> src >> dest >> weight;
            Edge e = Edge(src, dest, weight);
            graph.adjList.at(src).push_back(e);
        }
        fileReader.close();
        return graph;
    }
};
#endif /* FILEREADER_H_ */