#include "node.hpp"
#include "Message.h"

Node::Node(string id, int status, const Cluster& c) : id(id), status(status), cluster(c) {
}

int Node::generate_proposal_id() {
    // TODO
    return 0;
}

int Node::propose(int client_msg) {
    // *************** 1. PROPOSAL ******************** //
    // Proposal id
    int proposal_id = this->generate_proposal_id();
    Message* propose_message = new ProposeMessage(proposal_id);

    // get all nodes
    // we get back PromisedMessages here
    vector<Node*> cluster_nodes = this->c.get_nodes();
    vector<Node*> agreed_nodes; // consensus agreements
    int total_up_nodes = 1; // include current node
    for (auto node_ptr : cluster_nodes) {
        if (node_ptr->status == 1 && node_ptr->get_id() != this->id) {
            total_up_nodes++;

            Message& promise_message = node_ptr->accept(propose_message);
            if (promise_message.id == propose_message.id) {
                agreed_nodes.push_back(node_ptr);
            }
        }
    }

    // check consensus
    if (agreed_nodes.size() < (cluster_nodes.size() + 1) / 2) {
        return 0;
    }
    // OK to proceed

    // *************** 2. ACCEPT ********************** //
    Message* accept_message = new AcceptMessage(proposal_id, client_msg);
    int accepted_nodes = 1; // include current node
    for (auto node_ptr : agreed_nodes) {
        if (node_ptr->status == 1 && node_ptr->get_id() != this->id) {
            Message* accepted_message = node_ptr->accept(accept_message);
            if (accepted_message->id == proposal_id) {
                accepted_nodes++;
            }
        }
    }

    // check if accept consensus on this proposal_id was OK
    if (accepted_nodes < (cluster_nodes.size() + 1) / 2) {
        return 0;
    }

    // TODO write to learner for this node

}

Message& Node::accept(const Message& message) {
    if (message.type == MessageType.Proposal) {
        // TODO check Learner for most recent ID
    }
    else if (message.type == MessageType.Accept) {
        // TODO update Learner now with given ID, value
    }
}

string Node::get_id() const {
    return this->id;
}

int Node::get_status() const {
    return this->status;
}