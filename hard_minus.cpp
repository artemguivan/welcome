#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ls = {1, 2, 4, 5, 1, 7, 4, 9, 4, 0, 4};

    sort(ls.begin(), ls.end());

    unordered_map<int, int> dct;

    for (int i = 1; i < ls.size(); ++i) {
        if (ls[i] == ls[i - 1]) {
            dct[ls[i]]++;
        } else {
            dct[ls[i]] = 1;
        }
    }
    int c = 0;
    for (const auto& pair : dct) {
        if (pair.second % 2 == 0) {
            c++;
        }
    }

    cout << c;
    return 0;
}
