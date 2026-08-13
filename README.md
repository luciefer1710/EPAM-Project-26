# EPAM Project 26

Welcome to the **EPAM Project 26** repository. This repository contains a collection of coding projects covering web development and advanced algorithms implemented in C++.

---

## 📁 Repository Structure

```
EPAM-Project-26/
├── project 1 website/
│   └── index.html          # Interactive web application for XYZ Bank customer validation & coupon generation
├── project 2/
│   ├── quest1.cpp          # Tree DFS algorithm for evaluating trusted servers using bitwise XOR keys
│   └── quest2.cpp          # Unweighted graph BFS algorithm for finding cities reachable within distance D
└── project 3/
    ├── quest1.cpp          # Greedy algorithm for maximizing student scholarship allocation under a budget
    └── quest2.cpp          # Dynamic Programming solution for maximizing learning points (non-adjacent topics)
```

---

## 🚀 Projects Overview

### 1. Project 1: XYZ Bank Website (`project 1 website/`)
An interactive web application built with standard HTML5 and JavaScript.

- **Key Features:**
  - Dynamic hover alert welcoming customers.
  - Interactive registration toggle hiding instructions.
  - Customer ID validation (checks for `"XYZ"` prefix).
  - Unique Diwali coupon generation based on valid Customer IDs.

#### How to Run:
Open `project 1 website/index.html` directly in any standard web browser (Chrome, Firefox, Edge, Safari).

---

### 2. Project 2: Graph & Tree Algorithms (`project 2/`)
C++ implementations of foundational graph and tree traversal techniques.

- **`quest1.cpp` — Trusted Server Identifier (Tree DFS & Bitwise XOR)**
  - **Concept:** Traverses a tree structure using Depth-First Search (DFS) while keeping track of cumulative bitwise XOR of security keys from the root node.
  - **Goal:** Identifies and counts nodes where the path XOR value meets or exceeds threshold $K$.
  
- **`quest2.cpp` — Efficiently Reachable Cities (Graph BFS)**
  - **Concept:** Performs Breadth-First Search (BFS) on an unweighted undirected graph representing cities and connecting roads.
  - **Goal:** Determines how many cities can be reached from starting city 1 within distance $D$.

#### How to Compile & Run:
Using `g++` or any C++11 standard compliant compiler:
```bash
# Compile Quest 1
g++ -std=c++11 "project 2/quest1.cpp" -o "project 2/quest1"
./"project 2/quest1"

# Compile Quest 2
g++ -std=c++11 "project 2/quest2.cpp" -o "project 2/quest2"
./"project 2/quest2"
```

---

### 3. Project 3: Algorithmic Optimization (`project 3/`)
C++ solutions demonstrating Greedy Strategy and Dynamic Programming optimization techniques.

- **`quest1.cpp` — Maximum Scholarship Recipients (Greedy Strategy)**
  - **Concept:** Sorts student scholarship requirements in ascending order and greedily allocates funds.
  - **Goal:** Maximizes the total number of students receiving scholarships within a given budget $B$.

- **`quest2.cpp` — Maximum Learning Points (Dynamic Programming)**
  - **Concept:** Uses 1D Dynamic Programming to solve the maximum weight independent set on a line graph (similar to the House Robber problem).
  - **Goal:** Selects non-adjacent topics to maximize total learning points gained.

#### How to Compile & Run:
```bash
# Compile Quest 1
g++ -std=c++11 "project 3/quest1.cpp" -o "project 3/quest1"
./"project 3/quest1"

# Compile Quest 2
g++ -std=c++11 "project 3/quest2.cpp" -o "project 3/quest2"
./"project 3/quest2"
```

---

## 🛠️ Requirements & Environment

- **Web Browser:** Any modern browser for web application testing.
- **C++ Compiler:** `g++` or `clang++` supporting C++11 or higher (includes `<bits/stdc++.h>`).
