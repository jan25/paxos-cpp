#include "learner.hpp"
#include "cluster.hpp"
#include "node.hpp"
#include "Message.h"

#include <iostream>
#include <string>

using namespace std;

int main() {

    Cluster c;

    Node *n1 = new Node("n1", 1, c);
    Node *n2 = new Node("n2", 1, c);
    Node *n3 = new Node("n3", 1, c);
    Node *n4 = new Node("n4", 1, c);

    c.add_node(*n1);
    c.add_node(*n2);
    c.add_node(*n3);
    c.add_node(*n4);

    Node *clientConnector = c.get_random_node();
    cout << clientConnector->get_id() << endl;

    return 0;
}