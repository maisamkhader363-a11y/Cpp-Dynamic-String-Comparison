# C++ Dynamic String Length Comparison & Allocation

This repository features a structural C++ implementation focused on handling C-style strings, runtime boundaries evaluation, and safe heap memory utilization.

## 📋 Features & Lab Requirements

The program accepts two standalone character arrays from user input, evaluates their boundaries, and executes the following core logic:
* **Length Validation:** Utilizes `strlen()` to compute and compare the exact lengths of both inputs.
* **Dynamic Memory Expansion:** Determines the maximum required size (`maxlen + 1` for the null-terminator) and safely requests a raw character buffer on the heap using `new char[]`.
* **Safe Copying:** Employs `strcpy()` to securely duplicate the longer string into the new runtime address without modifying the original source variables.
* **Tie-Breaking Rule:** If both input arrays possess identical lengths, the algorithm defaults to returning a newly allocated duplicate of the **first string**.

## 🛠️ Memory Management & Safety
* Prompts for precise execution-time bounds for individual string allocation inside the `main` driver code.
* Strict adherence to resource clean-up patterns by using explicit `delete[]` allocations on all heap-allocated pointers (`A`, `B`, and the returned `result`) to systematically eliminate risk of runtime memory leaks.
