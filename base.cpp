#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <sstream>
using namespace std;

void printVector(const vector<int> &vec, const string &separator = ", ", const string &prefix = "[", const string &suffix = "]")

    int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numTests;
    cin >> numTests;
    while (numTests--)
    {
        int size;
        cin >> size;
        cin.ignore();
        string line;
        getline(cin, line);
        istringstream iss(line);
        int num;
        vector<int> arr;
        while (iss >> num)
        {
            arr.push_back(num);
        }
    }
}