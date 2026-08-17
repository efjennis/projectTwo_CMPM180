#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void resetCursor() {      
    cout << "\033[H";
}

void clearArt(int height) {
    resetCursor();
    for (int i = 0; i < height; ++i) {
        cout << "                           \n";
    }
    resetCursor();
}

void printArt() {
    resetCursor();
    cout << "
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
    "
}

int main () {
    int height = 9;

    while (true) {
        printArt();
        this_thread::sleep_for(chrono::milliseconds(500));

        clearArt(height);
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    return 0;
}
