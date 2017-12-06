#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include <list>
#include <queue>
#include <deque>


using std::vector; using std::list;
using std::string; using std::priority_queue;
using std::deque;

struct Vertex
{
    unsigned index, weight;
};

inline bool operator > (const Vertex& lhs, const Vertex& rhs)
{
    return lhs.weight > rhs.weight;
}

typedef vector<list<Vertex> > AdjList;
typedef priority_queue<Vertex, vector<Vertex>, std::greater<Vertex> > priorityQueue;

void addAdjVertex (priorityQueue&, const list<Vertex>&, const deque<bool>&);

int main()
{
    std::ifstream networkFile("C:/Users/s521059/CLionProjects/Euler Project/EulerP107/p107_network.txt");
    AdjList network(40);
    unsigned origNetworkWeight = 0;

    /* Create an adjacency list on the fly while reading an adacency
     * matrix from the input file */
    for (AdjList::iterator vertexItr = network.begin();
         vertexItr != network.end() && networkFile.good(); ++vertexItr)
    {
        char c;
        Vertex vertex;

        for (unsigned adjVertex = 0; adjVertex < network.size(); ++adjVertex) {
            c = networkFile.peek();
            if (isdigit(c)) {
                networkFile >> std::noskipws >> vertex.weight >> c;
                vertex.index = adjVertex;
                vertexItr->push_back(vertex);
                origNetworkWeight += vertex.weight;
            }
            else
                networkFile >> c >> c;
        }
    }
    origNetworkWeight >>= 1;
    networkFile.close();

    //-----------------------------------------------------------------------------

    deque<bool> isInNetwork (network.size(), false);
    priorityQueue pq;
    unsigned minNetworkWeight = 0, minNetworkSize = 0;

    isInNetwork.front() = true;
    addAdjVertex (pq, network[0], isInNetwork);

    while (++minNetworkSize != network.size()) {
        Vertex minAdjVertex = pq.top();
        while (isInNetwork[minAdjVertex.index]) {
            pq.pop();
            minAdjVertex = pq.top();
        }

        isInNetwork[minAdjVertex.index] = true;
        minNetworkWeight += minAdjVertex.weight;
        addAdjVertex (pq, network[minAdjVertex.index], isInNetwork);
    }
    std::cout << origNetworkWeight - minNetworkWeight;
}

void addAdjVertex (priorityQueue& pq, const list<Vertex>& adjVertices, const deque<bool>& isInNetwork)
{
    for (list<Vertex>::const_iterator it = adjVertices.begin();
         it != adjVertices.end(); ++it)
    {
        if (!isInNetwork[it->index])
            pq.push(*it);
    }
}