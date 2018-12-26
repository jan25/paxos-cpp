#include "learner.hpp"
#include "cluster.hpp"
#include "node.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {
    Learner l;
    l.remember(make_pair("abc", "100"));
    cout << l.try_get_value("abc");

    return 0;
}