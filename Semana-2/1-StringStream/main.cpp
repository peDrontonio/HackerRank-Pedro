#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// parseInts takes a string of comma-separated integers
// and returns a vector<int> with the parsed numbers.
vector<int> parseInts(const string& str) {
    vector<int> result;
    stringstream ss(str);
    int number;
    char comma;
    // extract integers until no more are available
    while (ss >> number) {
        result.push_back(number);
        ss >> comma; // read and discard the comma
    }
    return result;
}

int main() {
    string line;
    // read one line of input (e.g. "23,4,56")
    getline(cin, line);

    vector<int> integers = parseInts(line);

    // print each integer on its own line
    for (int x : integers) {
        cout << x << "\n";
    }

    return 0;
}
