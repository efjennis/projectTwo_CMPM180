#include <iostream>
#include <unordered_map>
#include <map>
#include <thread>
#include <chrono>

using namespace std;

void Title_seq();
void Tasks();
void Thoughts();
void Struggle();
void GiveUp();

int main() {
    Title_seq();
    Tasks();
    Thoughts();
    Struggle();
    GiveUp();
    return 0;
}


void Title_seq() {
    cout << R"(
 █    ██  ███▄    █   █████▒▒█████   ▄████▄   █    ██   ██████ ▓█████ ▓█████▄ 
 ██  ▓██▒ ██ ▀█   █ ▓██   ▒▒██▒  ██▒▒██▀ ▀█   ██  ▓██▒▒██    ▒ ▓█   ▀ ▒██▀ ██▌
▓██  ▒██░▓██  ▀█ ██▒▒████ ░▒██░  ██▒▒▓█    ▄ ▓██  ▒██░░ ▓██▄   ▒███   ░██   █▌
▓▓█  ░██░▓██▒  ▐▌██▒░▓█▒  ░▒██   ██░▒▓▓▄ ▄██▒▓▓█  ░██░  ▒   ██▒▒▓█  ▄ ░▓█▄   ▌
▒▒█████▓ ▒██░   ▓██░░▒█░   ░ ████▓▒░▒ ▓███▀ ░▒▒█████▓ ▒██████▒▒░▒████▒░▒████▓ 
░▒▓▒ ▒ ▒ ░ ▒░   ▒ ▒  ▒ ░   ░ ▒░▒░▒░ ░ ░▒ ▒  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░░░ ▒░ ░ ▒▒▓  ▒ 
░░▒░ ░ ░ ░ ░░   ░ ▒░ ░       ░ ▒ ▒░   ░  ▒   ░░▒░ ░ ░ ░ ░▒  ░ ░ ░ ░  ░ ░ ▒  ▒ 
 ░░░ ░ ░    ░   ░ ░  ░ ░   ░ ░ ░ ▒  ░         ░░░ ░ ░ ░  ░  ░     ░    ░ ░  ░ 
   ░              ░            ░ ░  ░ ░         ░           ░     ░  ░   ░    
                                    ░                                  ░     
------------------------------------------------------------------------------
)" << endl;
}

void Tasks() {
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
}

void Thoughts() {
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
}

void Struggle() {
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
}

void GiveUp() {
    cout << "Maybe I'll just.....\n";
    cout << R"(
  ▄████  ██▓ ██▒   █▓▓█████     █    ██  ██▓███  
 ██▒ ▀█▒▓██▒▓██░   █▒▓█   ▀     ██  ▓██▒▓██░  ██▒
▒██░▄▄▄░▒██▒ ▓██  █▒░▒███      ▓██  ▒██░▓██░ ██▓▒
░▓█  ██▓░██░  ▒██ █░░▒▓█  ▄    ▓▓█  ░██░▒██▄█▓▒ ▒
░▒▓███▀▒░██░   ▒▀█░  ░▒████▒   ▒▒█████▓ ▒██▒ ░  ░
 ░▒   ▒ ░▓     ░ ▐░  ░░ ▒░ ░   ░▒▓▒ ▒ ▒ ▒▓▒░ ░  ░
  ░   ░  ▒ ░   ░ ░░   ░ ░  ░   ░░▒░ ░ ░ ░▒ ░     
░ ░   ░  ▒ ░     ░░     ░       ░░░ ░ ░ ░░       
      ░  ░        ░     ░  ░      ░              
                 ░
    )" << endl;
}
