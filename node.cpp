#include "node.hpp"

Node::Node(string id, int status, const Cluster& c) {
    this->id = id;
    this->status = status;
    this->cluster = c;
}

void Node::propose() {
    // TODO
}

void Node::accept() {
    // TODO
}