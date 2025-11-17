# Algorithms index

This file indexes the algorithm-focused example files in this repository and provides quick run commands and short summaries.

Files:

- `sorting_stl_note/sorting.cpp` — Sorting examples and comparators
  - Summary: demonstrates `sort()` (ascending/descending), sorting `vector<pair<...>>`, and custom comparators (lambdas and predicates).
  - Run (PowerShell / MinGW g++):
    ```powershell
    g++ -std=c++17 ".\sorting_stl_note\sorting.cpp" -o sorting_demo.exe
    .\sorting_demo.exe
    ```
  - Run (MSVC):
    ```powershell
    cl /EHsc .\sorting_stl_note\sorting.cpp
    .\sorting.exe
    ```

- `other_algorithms_note/algo.cpp` — Miscellaneous STL algorithms
  - Summary: compact examples for `reverse`, `next_permutation`, `max_element` / `min_element`, `binary_search`, and `__builtin_popcount`.
  - Run (PowerShell / MinGW g++):
    ```powershell
    g++ -std=c++17 ".\other_algorithms_note\algo.cpp" -o algo_demo.exe
    .\algo_demo.exe
    ```
  - Note: `algo.cpp` in this repository contains multiple small `main()` sections as separate examples; compile/run the file that corresponds to the example you want to run (or split into separate files if you prefer one example per executable).

Notes and tips

- Expected outputs are included inline as comments in each example file (e.g., `// Output: 1 2 3 4`). Use these to verify correctness after running the compiled binary.
- If you'd like, I can split `algo.cpp` into separate example files (e.g., `reverse.cpp`, `next_permutation.cpp`, `binary_search.cpp`) so each compiles and runs independently — say the word and I'll create them.

Happy experimenting — run the examples and compare console output with the inline comments to validate behavior.
