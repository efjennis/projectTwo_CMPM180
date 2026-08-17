#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;
int main() {
    unordered_map<int, string> struggle_dict = { 
        {1, "Why Can't I get this?!"},
        {2, "Why is this so hard?"},
        {3, "What did I just read again?"},
        {4, "Why is my brain foggy?"},
        {5, "Why isn't school built for people like me?"},
        {6, "Why do I need accomodations?"},
        {7, "I just want to watch TV, I can't keep on task"},
        {8, "Why is this so fucking hard?"}
    };

    cout << "\nStruggle:" << endl;
    for (const auto& [number, struggle] : struggle_dict) {
        cout << struggle << " " << number << endl;
    }

    return 0;
}
