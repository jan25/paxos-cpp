#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Cluster;

class Node {
    private:
        string id;
        int status; // 1 is up, 0 is down
        const Cluster& cluster;
    public:
        Node(string, int, const Cluster&);

        void propose();
        void accept();

        string get_id() const;
        int get_status() const;
};

#endif