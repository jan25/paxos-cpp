#include "node.hpp"

Node::Node(string id, int status, const Cluster& c) : id(id), status(status), cluster(c) {
}

void Node::propose() {
    // TODO
}

void Node::accept() {
    // TODO
}

string Node::get_id() const {
    return this->id;
}

int Node::get_status() const {
    return this->status;
}