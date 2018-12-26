#include "cluster.hpp"

vector<Node&> Cluster::get_nodes() {
    return this->nodes;
}

vector<Node&> Cluster::add_node(const Node& node) {
    // TODO check if node with same node.id already exists
    this->nodes.push_back(node);
    return this->get_nodes();
}

vector<Node&> Cluster::remove_node(const Node& node) {
    // TODO
    return this->nodes;
}

vector<Node&> Cluster::get_random_node() {
    // TODO
    return this->nodes.size() ? this->nodes[0] : NULL;
}

Cluster& operator =(Cluster& c) {
    return c;
}