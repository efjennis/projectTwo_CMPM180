#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;
int main() {
    unordered_map<int, string> tasks_dict = {
        {1, "Homework?"},
        {2, "Clean House?"},
        {3, "Go To Class?"},
        {4, "Sleep On Time?"},
        {5, "Study?"},
        {6, "Call Mom?"},
        {7, "Journal?"},
        {8, "Eat?"}
    };

    cout << "\nTask:" << endl;
    for (const auto& [number, task] : tasks_dict) {
        cout << task << " " << number << endl;
    }

    return 0;
}
