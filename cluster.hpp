#ifndef CLUSTER_H
#define CLUSTER_H

#include "node.hpp"
#include <vector>

class Cluster {
    private:
        vector<Node*> nodes;
    public:
        vector<Node*> get_nodes();
        vector<Node*> add_node(const Node&);
        vector<Node*> remove_node(const Node&);

        Node* get_random_node();
};

#endif