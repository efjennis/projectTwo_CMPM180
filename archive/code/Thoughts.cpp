#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;
int main() {
    unordered_map<int, string> thoughts_dict {
        {1, "Whats on TV right now?"},
        {2, "Remember when .....?"},
        {3, "I should really be taking a break..."},
        {4, "I need to be productive"},
        {5, "Do I have to go to class?"},
        {6, "Just one more episode"},
        {7, "Why can't I be normal?"},
        {8, "Maybe I should give up?"}
    };

    cout << "\nThought:" << endl;
    for (const auto& [number, thought] : thoughts_dict) {
        cout << thought << " " << number << endl;
    }

    return 0;
}
