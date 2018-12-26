#include "learner.hpp"

Learner::Learner() { }

bool Learner::remember(pair<string, string>& key_value) {
    this->db[key_value.first] = key_value.second;
    return true;
}

string Learner::try_get_value(string& key) {
    if (this->db.find(key) != this->db.end()) {
        return this->db[key];
    }
    return NULL;
}

