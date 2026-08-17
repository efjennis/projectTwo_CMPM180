#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <thread>
#include <chrono>
#include <random>
#include <atomic>
#include <exception>

using namespace std;

// Shared thread atomic signal for sensory overload
atomic<bool> sensory_overload(false);

// Modern C++ Thread Interplay: Thought thread collides with Task thread
void Interrupted_Tasks() {
    vector<string> tasks = {
        "Homework", "Clean House", "Go To Class", 
        "Sleep On Time", "Study", "Call Mom", "Journal", "Eat"
    };

    vector<string> thoughts = {
        "Whats on TV right now?", "Remember when .....?", 
        "I should really be taking a break...", "I need to be productive", 
        "Do I have to go to class?", "Just one more episode", 
        "Why can't I be normal?", "Maybe I should give up?"
    };

    mt19937 rng(random_device{}());

    for (size_t i = 0; i < tasks.size(); ++i) {
        if (sensory_overload.load()) break;

        // Attempting a task...
        cout << "[TASK]: " << tasks[i] << "..." << flush;
        this_thread::sleep_for(chrono::milliseconds(300 + (rng() % 400)));

        // Unpredictable context-switch mid-execution
        if (rng() % 2 == 0) {
            // ANSI escape: Carriage return (\r) and clear line (\033[K) to erase task progress
            cout << "\r\033[K  [THOUGHT INTERRUPT]: " << thoughts[rng() % thoughts.size()] << "\n";
            this_thread::sleep_for(chrono::milliseconds(250));
            i--; // Regress execution index—stuck in a context loop
        } else {
            cout << " [Abandoned]\n";
        }
    }
}

// Data Structure as Narrative: Overflowing Stack representing unprocessed struggles
void Overflowing_Struggle() {
    stack<string> struggle_stack;
    vector<string> struggles = {
        "Why Can't I get this?!", "Why is this so hard?",
        "What did I just read again?", "Why is my brain foggy?",
        "Why isn't school built for people like me?", "Why do I need accomodations?",
        "I just want to watch TV, I can't keep on task", "Why is this so fucking hard?"
    };

    cout << "\n--- PUSHING STRUGGLES TO STACK ---\n";
    for (const auto& s : struggles) {
        struggle_stack.push(s);
        cout << "[MEMORY ALLOCATED]: " << struggle_stack.top() << "\n";
        this_thread::sleep_for(chrono::milliseconds(150));
    }

    // Unordered Map Traversal Misuse: Iterating out of order
    unordered_map<int, string> fragmented_thoughts = {
        {1, "Focusing..."}, {2, "Attempting execution..."}, {3, "Processing context..."}
    };

    cout << "\n[HASH TABLE DISORDER]:\n";
    for (const auto& [key, val] : fragmented_thoughts) {
        cout << "Key: " << key << " -> " << val << " (Order Not Guaranteed)\n";
        this_thread::sleep_for(chrono::milliseconds(200));
    }
}

void Title_Seq() {
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

// Exception-driven climax
void GiveUp() {
    cout << "\n[CRITICAL]: Executive function budget exhausted.\n";
    this_thread::sleep_for(chrono::seconds(1));
    
    cout << "Maybe I'll just.....\n";
    this_thread::sleep_for(chrono::milliseconds(800));

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

    // Early non-zero termination representing an unresolved process
    quick_exit(1);
}

int main() {
    Title_Seq();

    try {
        // Asynchronous thread execution: Task processing with thought noise
        thread execution_thread(Interrupted_Tasks);
        execution_thread.join();

        Overflowing_Struggle();
        GiveUp();

    } catch (const exception& e) {
        cerr << "[UNHANDLED SYSTEM EXCEPTION]: " << e.what() << endl;
    }

    return 0;
}
