#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_set<int> seen;
        for (int i = 0; i < n; ++i) {
            if (seen.count(arr[i] - x)) {
                return 1;
            }
            if (seen.count(arr[i] + x)) {
                return 1;
            }
            seen.insert(arr[i]);
        }
        return -1;
    }
};

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution solution;
    int result = solution.findPair(n, x, arr);
    cout << result << endl;

    return 0;
}
