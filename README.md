![UNFOCUSED Demo](assets/demo.gif)

**[UN]FOCUSED** is a interactive C++ code poem that models the daily internal mechanics of living with ADHD[cite: 2]. By mapping core computer science concepts—concurrency, context switches, stack allocation, and memory disorder—to human executive dysfunction, the program translates abstract psychological struggles into tangible, terminal-based execution behavior[cite: 1, 2].

Where the outside world sees laziness or distraction, this project uses code to demonstrate the constant, exhausting background friction of a brain fighting to function[cite: 2].

---

**Concept & Technical Metaphors**

The codebase leverages modern C++ mechanics as literal narrative devices[cite: 1]:

*   **Asynchronous Thought Collisions (`std::thread`, `std::atomic`):** Task execution runs on a simulated loop that is continuously context-switched and interrupted mid-execution by asynchronous, intrusive thoughts[cite: 1].
*   **Terminal Regressions (`\r\033[K`):** Task progress in the terminal is actively overwritten and reset as focus breaks, causing execution indices to loop backward[cite: 1].
*   **Stack Allocation as Emotional Capacity (`std::stack`):** Unprocessed frustrations, self-doubt, and sensory friction are pushed sequentially onto a stack until memory budget limits are reached[cite: 1].
*   **Order Instability (`std::unordered_map`):** Hash table traversal reflects the non-sequential, highly chaotic nature of fragmented context switching[cite: 1].
*   **Executive Burnout (`quick_exit`):** Rather than a graceful thread termination, the system experiences a critical executive function exhaustion, forcing an immediate early exit[cite: 1].

---

**Build & Execution**

**Prerequisites**
*   C++17 compliant compiler (e.g., `g++` or `clang++`)[cite: 3]
*   `make` utility[cite: 3]
*   An ANSI-compatible terminal (for screen-clearing and escape sequence effects)[cite: 1]

**Quick Start**

1. Clone or download the repository.
2. Build and run immediately using the included Makefile:
   ```bash
   make run
