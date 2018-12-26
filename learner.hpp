#ifndef LEARNER_H
#define LEARNER_H

#include <utility>
#include <string>
#include <map>

using namespace std;

class Learner {
    private:
        map<string, string> db;
    
    public:
        Learner();

        // TODO use templates for pair key, value
        bool remember(const pair<string, string>&);

        string try_get_value(const string& key);
};

#endif