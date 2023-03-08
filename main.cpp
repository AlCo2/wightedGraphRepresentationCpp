#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void addToGraph(vector<pair<int, int>> graph[], int vertex,int edge ,int wight);
void showGraph(vector<pair<int, int>> graph[]){
    for(int i=0;i<5;i++){
        cout << "vertex: " << i << endl;
        for(auto j : graph[i]){
            cout << "edge: " << j.first << " wight: " << j.second << endl;

        }
        cout << endl;
    }
}

int main(){
    vector<pair<int, int>> graph[5];
    addToGraph(graph, 0, 1, 6);
    addToGraph(graph, 0, 3, 1);
    addToGraph(graph, 1, 3, 2);
    addToGraph(graph, 1, 4, 2);
    addToGraph(graph, 1, 2, 5);
    addToGraph(graph, 2, 4, 5);
    addToGraph(graph, 3, 4, 1);

    showGraph(graph);

    return 0;
}

void addToGraph(vector<pair<int, int>> graph[], int vertex, int edge,int wight){
    graph[vertex].push_back(make_pair(edge, wight));
    graph[edge].push_back(make_pair(vertex, wight));
}

