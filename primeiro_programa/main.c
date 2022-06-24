
#include <stdio.h>


using std::cout; using std::vector;
using std::endl; using std::copy;

int main() {
    vector<int> ascii_vals {97, 98, 99, 100, 101, 102, 103};
    vector<char> chars {};

    chars.reserve(ascii_vals.size());
    for (auto &n : ascii_vals) {
        chars.push_back(n);
    }
    copy(chars.begin(), chars.end(),
              std::ostream_iterator<char>(cout, "; "));

}