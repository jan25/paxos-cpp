#include "learner.hpp"

Learner::Learner() { }

bool Learner::remember(pair<string, string>& key_value) {
    this->db[key_value.first] = key_value.second;
    return true;
}

