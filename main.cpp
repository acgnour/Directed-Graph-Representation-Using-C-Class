#include <iostream>
using namespace std;

class Graph {
private:
    int adjMatrix[5][5];
    int vertices;

public:
    Graph(int v) {
        vertices = v;

        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addEdge(int from, int to) {
        adjMatrix[from][to] = 1;
    }

    void display() {
        cout << "Directed Graph Matrix:\n";

        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    g.display();

    return 0;
}