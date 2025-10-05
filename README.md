# Fundamentals-C

Personal CS fundamentals handbook — algorithms, data structures, synchronization primitives, and low-level problem-solving patterns implemented in **C** and **C++**.  
This repository serves as a practical reference for **Computer Science fundamentals** and **Software Engineering interview preparation**, covering key concepts from **memory management** to **multithreading**.

---

## Overview

The goal of this project is to collect and implement essential building blocks every systems and software engineer should understand and be able to implement from scratch.  
Topics include:

- **Data Structures** – Linked Lists, Stacks, Queues, Trees, Heaps, Graphs, Hash Tables  
- **Algorithms** – Sorting, Searching, Recursion, Graph Algorithms, Dynamic Programming
- **Memory and Pointers** – Allocation, Stack vs Heap, Pointer arithmetic, References  
- **Concurrency and Synchronization** – Locks, Semaphores, Barriers, Peterson/Tournament Locks  
- **Systems Fundamentals** – Process control, Scheduling basics, C vs C++ internals  

Each module is written with clarity and modularity in mind, allowing easy experimentation, compilation, and debugging.

---

## Build and Run

The project supports building in **both C and C++** modes using a unified Makefile.  
Two separate executables are produced to avoid conflicts.

### Build Commands

| Command | Description |
|----------|-------------|
| `make` | Builds both versions (`program_c` and `program_cpp`) |
| `make program_c` | Builds the C version only |
| `make program_cpp` | Builds the C++ version only |
| `make clean` | Removes all object files and executables |

---

## Running

Run either executable directly:

```bash
./program_c     # Run the C version
./program_cpp   # Run the C++ version
