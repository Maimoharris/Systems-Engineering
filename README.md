# Systems Software Engineering & Embedded Systems

### C • C++ • Rust • Operating Systems • Embedded Systems • Computer Architecture • Systems Security

> **A long-term engineering journey into the software that makes computers, operating systems, embedded devices, networks, and security systems work.**

![C](https://img.shields.io/badge/C-Systems%20Programming-A8B9CC?style=for-the-badge\&logo=c\&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-Modern%20C%2B%2B-00599C?style=for-the-badge\&logo=cplusplus\&logoColor=white)
![Rust](https://img.shields.io/badge/Rust-Systems%20Programming-000000?style=for-the-badge\&logo=rust\&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-Systems-FFC107?style=for-the-badge\&logo=linux\&logoColor=black)
![CMake](https://img.shields.io/badge/CMake-Build%20Systems-064F8C?style=for-the-badge\&logo=cmake\&logoColor=white)
![Git](https://img.shields.io/badge/Git-Version%20Control-F05032?style=for-the-badge\&logo=git\&logoColor=white)

---

## About This Repository

This repository documents my journey into **Systems Software Engineering, Operating Systems, Embedded Systems, Computer Architecture, High-Performance Computing, and Systems Security**.

This is not intended to be a collection of isolated tutorials or copied exercises.

It is an evolving engineering laboratory where I learn by:

* studying how computers work beneath high-level abstractions;
* implementing fundamental data structures and algorithms from scratch;
* writing low-level software in C and C++;
* learning how memory, processes, threads, filesystems, and networks actually work;
* studying computer architecture and assembly;
* building Linux/POSIX systems software;
* developing bare-metal firmware;
* working with microcontrollers and hardware interfaces;
* exploring real-time operating systems;
* learning Rust for memory-safe systems programming;
* building networking and backend infrastructure;
* studying concurrency, synchronization, performance, and resource management;
* experimenting with operating-system internals and kernel development;
* applying offensive-security knowledge to low-level software, firmware, binaries, and operating systems.

The objective is simple:

> **Move from being a developer who uses computers to an engineer who understands, builds, debugs, and secures the systems underneath them.**

---

# Why Systems Software?

Most modern software is built on layers of abstractions.

An application eventually depends on:

```text
Application
    ↓
Framework / Runtime
    ↓
Libraries
    ↓
Operating System
    ↓
System Calls
    ↓
Kernel
    ↓
CPU / Memory / Devices
    ↓
Hardware
```

I want to understand these layers rather than treating them as black boxes.

That means going beyond:

```cpp
std::thread
std::vector
std::mutex
```

and asking:

* What actually happens when a thread is created?
* How does the operating system schedule it?
* Where does its stack live?
* How does virtual memory map its address space?
* What happens during a context switch?
* How does a mutex interact with the scheduler?
* What happens when a process calls `fork()`?
* How does `exec()` replace a process image?
* How does a program communicate through pipes or sockets?
* How does the CPU execute the resulting machine instructions?
* How do caches affect performance?
* How does a compiler transform source code into executable code?
* How does an ELF binary become a running process?
* What happens when software interacts directly with hardware?

This repository exists to answer those questions through **theory, experiments, implementation, debugging, and real projects**.

---

# My Engineering Direction

My long-term goal is to develop into a **Systems Security Engineer / Systems Software Engineer** capable of working across several layers of the computing stack.

### Core specialization

```text
                 SYSTEMS ENGINEERING
                         │
        ┌────────────────┼────────────────┐
        │                │                │
        ▼                ▼                ▼
 Operating Systems   Embedded Systems   Backend Systems
        │                │                │
        ▼                ▼                ▼
 Kernel / Memory     Firmware / RTOS    Networking
 Processes           Drivers            Distributed Systems
 Scheduling          Peripherals        High Performance
 Filesystems         Interrupts         Concurrency
        │                │                │
        └────────────────┼────────────────┘
                         ▼
                 SYSTEMS SECURITY
                         │
        ┌────────────────┼────────────────┐
        ▼                ▼                ▼
   Binary Security   Kernel Security   Firmware Security
   Exploitation      Reverse Eng.      Secure Boot
   Fuzzing           Drivers            Embedded Security
   EDR/XDR           Sandboxing         IoT Security
```

My existing background in offensive security provides an additional perspective.

Rather than only asking:

> "How do I exploit this system?"

I want to increasingly be able to ask:

> **"How was this system built, why does it behave this way, how can it be made faster and safer, and where are its security boundaries?"**

---

# Languages

## C

C is the foundation for understanding traditional systems programming.

I am using C to understand:

* pointers
* memory layout
* manual memory management
* structs
* function pointers
* arrays
* compilation
* linking
* ABI concepts
* system calls
* POSIX APIs
* processes
* threads
* signals
* file descriptors
* sockets
* low-level data structures
* embedded programming
* hardware interaction

C is particularly important because many operating-system and embedded environments expose their lowest-level interfaces through C.

---

## C++

C++ is my primary language for exploring modern systems software.

The goal is not simply to learn syntax.

I am focusing on writing **modern, efficient, maintainable, resource-conscious C++**.

Areas of focus include:

* C++17 / C++20+
* pointers and references
* RAII
* ownership
* smart pointers
* move semantics
* templates
* generic programming
* STL internals
* iterators
* allocators
* exceptions
* lambdas
* concurrency
* atomics
* memory ordering
* multithreading
* lock-free programming
* networking
* performance engineering
* profiling
* system APIs
* C interoperability
* low-level Linux programming

The deeper objective is understanding **what the language abstractions cost and what they compile down to**.

---

## Rust

Rust is being introduced as a second-generation systems-programming tool in this journey.

I am particularly interested in Rust because it combines:

* systems-level control;
* strong type safety;
* ownership and borrowing;
* compile-time memory-safety guarantees;
* concurrency safety;
* zero-cost abstractions;
* `no_std` programming;
* embedded development;
* C interoperability;
* systems infrastructure.

Rust's ownership model provides memory-management guarantees checked by the compiler without requiring a garbage collector.

For embedded development, Rust's ecosystem explicitly supports bare-metal environments and ARM Cortex-M development, including concepts such as interrupts, memory-mapped peripherals, SPI, I2C, and serial communication.

I also plan to explore the intersection of **Rust + C/C++**, particularly where legacy systems and newer memory-safe components need to coexist.

---

# Core Learning Tracks

This repository is organized around several interconnected tracks rather than a single linear curriculum.

## 01 — Modern C++

### Topics

* Language fundamentals
* Memory
* Pointers and references
* RAII
* OOP
* Templates
* STL
* Iterators
* Smart pointers
* Move semantics
* Exception safety
* Generic programming
* Concurrency
* Atomics
* Modern C++ design

### Projects

* CLI calculator
* Shell
* File explorer
* HTTP parser
* JSON parser
* Custom containers
* Memory allocator

---

# 02 — Data Structures & Algorithms

I am implementing fundamental data structures myself before relying heavily on standard-library implementations.

### Data structures

* Arrays
* Strings
* Linked lists
* Stacks
* Queues
* Hash tables
* Binary search trees
* Balanced trees
* Heaps
* Graphs
* Tries

### Algorithms

* Searching
* Sorting
* Recursion
* Graph traversal
* Dynamic programming
* Greedy algorithms
* Backtracking
* Hashing
* Complexity analysis

The goal is not competitive-programming volume.

The goal is understanding:

> **How data structures affect memory, performance, cache behavior, and system design.**

---

# 03 — Computer Architecture

Understanding software requires understanding the machine executing it.

Topics include:

* CPU architecture
* x86-64
* ARM
* registers
* instruction execution
* stack
* heap
* calling conventions
* ABI
* machine instructions
* assembly
* CPU pipelines
* branch prediction
* cache hierarchy
* cache locality
* SIMD
* memory buses
* interrupts
* DMA

Projects include:

* Mini CPU/emulator
* Simple assembler
* Assembly experiments
* Binary-format experiments
* CPU/cache benchmarks

---

# 04 — Linux & POSIX Internals

Linux is the primary environment for this journey.

Topics include:

* Processes
* Threads
* Scheduling
* Signals
* File descriptors
* Pipes
* Shared memory
* `fork()`
* `exec()`
* `mmap()`
* `ptrace()`
* System calls
* `/proc`
* ELF
* Dynamic linking
* Permissions
* IPC
* Sockets
* Kernel interfaces
* systemd
* POSIX APIs

Projects include rebuilding simplified versions of:

```text
ps
top
kill
grep
cat
cp
mv
```

The purpose is to understand what these tools are actually doing rather than simply using them.

---

# 05 — Operating Systems

Operating Systems are one of the central goals of this repository.

I want to understand how an OS manages:

```text
CPU
 │
 ├── Processes
 ├── Threads
 ├── Scheduling
 ├── Memory
 ├── Filesystems
 ├── Devices
 ├── Networking
 └── Security
```

### Topics

* Boot process
* Kernel architecture
* System calls
* Processes
* Threads
* Context switching
* CPU scheduling
* Synchronization
* Mutexes
* Semaphores
* Spinlocks
* Virtual memory
* Paging
* TLB
* Memory allocators
* File systems
* Journaling
* Block devices
* Device drivers
* Networking
* Interrupts

### Projects

* Custom shell
* Memory allocator
* Process monitor
* Simple filesystem
* Kernel experiments
* Kernel module
* Toy operating system
* Scheduler experiments

A major part of this phase will involve studying educational systems such as **xv6** and implementing selected concepts independently.

---

# 06 — Embedded Systems

Embedded systems are the point where software meets physical hardware.

This track moves from high-level development toward:

```text
Source Code
    ↓
Compiler
    ↓
Machine Code
    ↓
Microcontroller
    ↓
Registers
    ↓
Peripherals
    ↓
Physical Hardware
```

### Focus

* Embedded C
* Bare-metal C++
* Bare-metal Rust
* ARM Cortex-M
* STM32
* Memory-mapped I/O
* GPIO
* Interrupts
* NVIC
* DMA
* Timers
* UART
* SPI
* I2C
* CAN
* Linker scripts
* Startup code
* Cross-compilation
* JTAG/SWD
* OpenOCD
* GDB
* FreeRTOS

### Projects

* Bare-metal LED driver
* GPIO driver
* Button interrupt
* UART driver
* SPI driver
* I2C driver
* CAN bus logger
* CAN bus sniffer
* Minimal scheduler
* Mini RTOS
* STM32 driver suite
* Secure firmware experiments

The embedded track intentionally avoids hiding everything behind framework abstractions.

I want to understand what happens underneath the HAL.

---

# 07 — Real-Time Systems

Embedded systems naturally lead into real-time computing.

Topics include:

* Real-time scheduling
* Tasks
* Interrupts
* Priority
* Preemption
* Context switching
* Queues
* Semaphores
* Mutexes
* Priority inversion
* Deadlines
* Timing constraints
* Deterministic execution

I will use **FreeRTOS** as one practical environment for studying these concepts while also implementing simplified mechanisms myself.

This creates an important bridge:

```text
Operating System Scheduling
             ↓
      Real-Time Scheduling
             ↓
       Embedded RTOS
             ↓
        Bare Metal
```

---

# 08 — Backend & Network Systems

Systems engineering also extends upward into high-performance infrastructure.

Topics include:

* TCP/IP
* UDP
* BSD sockets
* HTTP
* HTTP/2
* HTTP/3
* TLS
* WebSockets
* REST
* gRPC
* asynchronous I/O
* thread pools
* coroutines
* connection management
* load balancing
* distributed systems

### Projects

* TCP chat server
* HTTP server
* Multithreaded HTTP server
* HTTP proxy
* Reverse proxy
* Distributed key-value store
* Message queue
* Redis-like server
* SQLite-like database

The objective is to understand the infrastructure beneath modern backend frameworks.

---

# 09 — High-Performance Computing

Performance is not simply about writing faster code.

It requires understanding the machine.

Areas of study:

* Cache locality
* Memory access patterns
* CPU utilization
* Branch prediction
* SIMD
* Atomics
* Lock contention
* False sharing
* NUMA
* Thread pools
* Asynchronous execution
* Memory allocation
* Profiling
* Benchmarking

Tools:

```text
perf
Valgrind
AddressSanitizer
ThreadSanitizer
GDB
LLDB
```

Projects will be benchmarked before and after optimization whenever practical.

The goal is to replace:

> "This version feels faster."

with:

> "The benchmark shows why this version is faster."

---

# 10 — Rust for Systems Programming

Rust will progressively become part of the systems stack.

Areas include:

* Ownership
* Borrowing
* Lifetimes
* Traits
* Generics
* Smart pointers
* Error handling
* Concurrency
* Atomics
* Unsafe Rust
* `no_std`
* FFI
* Embedded Rust
* Systems networking
* OS experimentation

A particular focus will be understanding where Rust's safety model helps and where systems programming still requires careful reasoning about hardware, concurrency, memory, and `unsafe` code.

Rust's embedded documentation specifically covers bare-metal programming, Cortex-M systems, concurrency, peripherals, and interoperability with C/C++.

---

# 11 — Systems Security

Security is the thread connecting the entire journey.

My existing offensive-security background gives this repository a second dimension.

Instead of studying systems only from the perspective of functionality, I will also study:

### Memory Security

* Buffer overflows
* Use-after-free
* Double free
* Out-of-bounds access
* Integer vulnerabilities
* Memory corruption
* Heap exploitation
* Stack exploitation

### Binary Security

* ELF
* PE
* Assembly
* Disassembly
* Debugging
* Symbol resolution
* Dynamic linking
* Binary instrumentation

### OS Security

* Kernel attack surface
* Kernel modules
* Driver security
* Privilege boundaries
* Sandboxing
* System calls
* Linux security mechanisms

### Embedded Security

* Firmware analysis
* Firmware extraction
* Secure boot
* Trust boundaries
* Hardware interfaces
* UART
* SPI
* I2C
* CAN
* Firmware reverse engineering

### Security Engineering Projects

* ELF parser
* PE parser
* Binary analyzer
* Debugger
* Disassembler
* Fuzzer
* Memory scanner
* Mini EDR/antivirus
* Kernel module
* Firmware analysis tooling
* Security-focused embedded projects

This is where systems engineering and offensive security converge.

---

# Portfolio Roadmap

The repository will progressively contain projects such as:

| Project                   | Area                | Primary Language |
| ------------------------- | ------------------- | ---------------- |
| Custom Shell              | OS / Linux          | C++              |
| CLI File Explorer         | Filesystems         | C++              |
| HTTP Parser               | Networking          | C++              |
| JSON Parser               | Parsing             | C++              |
| Custom Containers         | Data Structures     | C++              |
| Memory Allocator          | Memory Management   | C/C++            |
| TCP Chat Server           | Networking          | C++              |
| HTTP Server               | Networking          | C++              |
| Multithreaded HTTP Server | Concurrency         | C++              |
| HTTP Proxy                | Networking          | C++              |
| Redis-like Server         | Backend Systems     | C++              |
| SQLite-like Database      | Storage             | C++              |
| Linux Process Monitor     | OS                  | C/C++            |
| Packet Sniffer            | Networking/Security | C/C++            |
| ELF Parser                | Binary Analysis     | C++/Rust         |
| PE Parser                 | Binary Analysis     | C++/Rust         |
| Debugger                  | Systems/Security    | C++/Rust         |
| Disassembler              | Reverse Engineering | C++/Rust         |
| Fuzzer                    | Security            | C++/Rust         |
| Kernel Module             | OS/Security         | C                |
| Toy Operating System      | OS                  | C/C++/Assembly   |
| STM32 Driver Suite        | Embedded            | C                |
| Bare-metal Driver Suite   | Embedded            | C/C++            |
| Mini RTOS                 | Embedded/OS         | C/C++            |
| CAN Logger                | Embedded            | C/C++/Rust       |
| Distributed KV Store      | Distributed Systems | C++/Rust         |
| Firmware Security Lab     | Embedded Security   | C/C++/Rust       |

---

# Engineering Principles

This repository follows a few principles.

## 1. Learn by building

Reading documentation is important.

Building is mandatory.

Whenever possible:

```text
Learn
 ↓
Implement
 ↓
Break
 ↓
Debug
 ↓
Measure
 ↓
Improve
 ↓
Document
```

---

## 2. Understand abstractions before depending on them

I will use libraries and frameworks, but I also want to understand what they abstract away.

For example:

```text
Boost.Asio
    ↓
Sockets
    ↓
TCP/IP
    ↓
Kernel networking
    ↓
Network driver
    ↓
Hardware
```

The objective is not to reinvent everything permanently.

It is to understand enough to know **what the abstraction is doing and when it matters**.

---

## 3. Measure performance

Performance claims should be supported by:

* benchmarks;
* profiling;
* memory measurements;
* CPU measurements;
* latency measurements;
* reproducible experiments.

---

## 4. Prefer engineering depth over project quantity

A small project deeply understood is more valuable than ten projects copied from tutorials.

Each major project should ideally answer:

* What problem does it solve?
* How does it work?
* What design decisions were made?
* What are the trade-offs?
* What are the failure modes?
* What did I learn?
* How was it tested?
* How does it perform?
* What would I change?

---

# Development Toolchain

## Languages

```text
C
C++
Rust
Python
x86-64 Assembly
ARM Assembly
```

Python may be used for tooling, automation, testing, analysis, and supporting experiments rather than as the primary systems language.

---

## Build Systems

```text
CMake
Make
Ninja
Cargo
```

---

## Debugging

```text
GDB
LLDB
OpenOCD
JTAG
SWD
```

---

## Performance & Memory Analysis

```text
perf
Valgrind
AddressSanitizer
ThreadSanitizer
Compiler sanitizers
Benchmarking tools
```

---

## Platforms

```text
Linux
POSIX
x86-64
ARM Cortex-M
STM32
```

---

## Networking

```text
BSD Sockets
TCP
UDP
HTTP
TLS
WebSockets
Boost.Asio
```

---

## Embedded

```text
arm-none-eabi-gcc
OpenOCD
JTAG/SWD
FreeRTOS
STM32 toolchains
```

---

# Repository Structure

The repository will evolve as the journey progresses, but the intended structure is approximately:

```text
systems-engineering/
│
├── 00-foundations/
│   ├── c/
│   ├── cpp/
│   ├── rust/
│   └── build-systems/
│
├── 01-data-structures/
│   ├── arrays/
│   ├── linked-list/
│   ├── hash-table/
│   ├── trees/
│   ├── heaps/
│   └── graphs/
│
├── 02-computer-architecture/
│   ├── assembly/
│   ├── cpu/
│   ├── memory/
│   ├── cache/
│   └── emulator/
│
├── 03-linux-internals/
│   ├── processes/
│   ├── threads/
│   ├── syscalls/
│   ├── ipc/
│   ├── signals/
│   └── elf/
│
├── 04-networking/
│   ├── sockets/
│   ├── tcp/
│   ├── udp/
│   ├── http/
│   ├── proxy/
│   └── servers/
│
├── 05-operating-systems/
│   ├── xv6/
│   ├── kernel/
│   ├── scheduler/
│   ├── memory/
│   ├── filesystem/
│   └── toy-os/
│
├── 06-embedded/
│   ├── bare-metal/
│   ├── stm32/
│   ├── drivers/
│   ├── interrupts/
│   ├── uart/
│   ├── spi/
│   ├── i2c/
│   └── can/
│
├── 07-rtos/
│   ├── freertos/
│   ├── scheduler/
│   └── synchronization/
│
├── 08-rust-systems/
│   ├── fundamentals/
│   ├── unsafe/
│   ├── no-std/
│   ├── ffi/
│   ├── embedded/
│   └── networking/
│
├── 09-high-performance/
│   ├── benchmarking/
│   ├── profiling/
│   ├── atomics/
│   ├── lock-free/
│   └── optimization/
│
├── 10-systems-security/
│   ├── binary-analysis/
│   ├── fuzzing/
│   ├── memory-security/
│   ├── kernel-security/
│   ├── firmware/
│   └── exploit-development/
│
├── projects/
│   ├── custom-shell/
│   ├── http-server/
│   ├── database/
│   ├── proxy/
│   ├── debugger/
│   ├── allocator/
│   ├── toy-os/
│   └── embedded/
│
├── notes/
│   ├── operating-systems/
│   ├── architecture/
│   ├── networking/
│   ├── embedded/
│   └── rust/
│
└── README.md
```

The structure may change as the projects become more mature.

The architecture of the repository is itself part of the learning process.

---

# How Projects Will Be Documented

Major projects will not simply contain source code.

Each project should eventually include:

```text
README
Architecture
Design decisions
Build instructions
Usage examples
Testing
Benchmarks
Security considerations
Known limitations
Lessons learned
Future improvements
```

For example:

```text
┌──────────────────────────────┐
│          Project             │
├──────────────────────────────┤
│ Problem                      │
│ Architecture                │
│ Implementation              │
│ Testing                     │
│ Benchmarking                │
│ Security                    │
│ Lessons Learned             │
│ Future Work                 │
└──────────────────────────────┘
```

This makes the repository useful not only as a code archive, but as evidence of **engineering thought process**.

---

# Learning Philosophy

This journey is intentionally difficult.

Systems programming requires being comfortable with concepts that are often hidden by higher-level languages and frameworks.

There will be:

* compiler errors;
* segmentation faults;
* race conditions;
* memory leaks;
* deadlocks;
* undefined behavior;
* broken builds;
* corrupted binaries;
* hardware failures;
* difficult debugging sessions;
* performance regressions;
* confusing assembly;
* kernel panics.

These are not failures of the journey.

They are part of the journey.

> **The goal is not to avoid difficult problems. The goal is to become capable of understanding and solving them.**

---

# Progress Tracking

Progress will be measured by **demonstrated capability**, not simply by completing tutorials.

### Foundation

* [ ] C fundamentals
* [ ] Modern C++
* [ ] Rust fundamentals
* [ ] Data structures
* [ ] Algorithms
* [ ] Git
* [ ] CMake / Make

### Computer Systems

* [ ] Computer architecture
* [ ] x86-64 assembly
* [ ] Linux internals
* [ ] POSIX APIs
* [ ] ELF
* [ ] Processes
* [ ] Threads
* [ ] IPC
* [ ] Virtual memory

### Operating Systems

* [ ] Scheduling
* [ ] Synchronization
* [ ] Memory management
* [ ] Filesystems
* [ ] System calls
* [ ] Kernel development
* [ ] Toy OS

### Networking

* [ ] TCP/IP
* [ ] UDP
* [ ] BSD sockets
* [ ] HTTP
* [ ] TLS
* [ ] WebSockets
* [ ] Async I/O
* [ ] Distributed systems

### Embedded

* [ ] ARM Cortex-M
* [ ] Bare-metal C
* [ ] Bare-metal C++
* [ ] Bare-metal Rust
* [ ] GPIO
* [ ] Interrupts
* [ ] UART
* [ ] SPI
* [ ] I2C
* [ ] CAN
* [ ] DMA
* [ ] RTOS
* [ ] JTAG/SWD
* [ ] Firmware analysis

### Performance

* [ ] Profiling
* [ ] Benchmarking
* [ ] Cache optimization
* [ ] Atomics
* [ ] Memory ordering
* [ ] Lock-free programming
* [ ] SIMD
* [ ] NUMA

### Security

* [ ] Memory corruption
* [ ] Binary analysis
* [ ] Reverse engineering
* [ ] Fuzzing
* [ ] Kernel security
* [ ] Driver security
* [ ] Firmware security
* [ ] Sandboxing
* [ ] EDR/XDR concepts

---

# Current Direction

The roadmap is intentionally designed as a progression rather than a collection of unrelated technologies.

```text
C / C++
   │
   ▼
Memory & Data Structures
   │
   ▼
Computer Architecture
   │
   ▼
Linux / POSIX
   │
   ▼
Processes / Threads / IPC
   │
   ├───────────────┐
   ▼               ▼
Operating Systems  Networking
   │               │
   ▼               ▼
Kernel Development Backend Systems
   │               │
   └───────┬───────┘
           ▼
    High Performance
           │
           ▼
     Systems Security
           │
           ├───────────────┐
           ▼               ▼
       Embedded          Rust
           │               │
           └───────┬───────┘
                   ▼
       Secure Systems Engineering
```

The original roadmap intentionally treats Operating Systems, Embedded Systems, and Backend Engineering as three applications of the same underlying systems discipline.

That idea is central to this repository.

---

# Long-Term Target

The ultimate objective is to become capable of designing and building systems across the following spectrum:

```text
                 HIGH LEVEL
                     │
          Distributed Infrastructure
                     │
             Backend Systems
                     │
              Network Services
                     │
             Operating Systems
                     │
                 Kernels
                     │
               Drivers / IPC
                     │
             Memory Management
                     │
             Computer Architecture
                     │
          Assembly / Machine Code
                     │
              Embedded Systems
                     │
               Microcontrollers
                     │
                 Hardware
                     │
                 LOW LEVEL
```

And across all of these layers:

```text
             PERFORMANCE
                  +
              RELIABILITY
                  +
               SECURITY
                  +
              CORRECTNESS
                  +
          HARDWARE AWARENESS
```

---

# Why C, C++ and Rust Together?

These languages represent different but complementary approaches to systems engineering.

### C

Teaches directness.

```text
Memory
Pointers
ABI
Hardware
OS Interfaces
```

### C++

Teaches abstraction without necessarily giving up control.

```text
RAII
Templates
Generic Programming
Concurrency
Performance
Large Systems
```

### Rust

Explores how strong compile-time guarantees can be incorporated into systems programming.

```text
Ownership
Borrowing
Lifetimes
Type Safety
Concurrency Safety
no_std
FFI
```

Together, they provide a broad perspective on the trade-offs involved in building low-level software.

Rust's embedded documentation also explicitly covers interoperability with C and C++, making the three-language approach practical rather than merely theoretical.

---

# Security as a Systems Discipline

My systems journey is closely connected to security engineering.

A vulnerability is often easier to understand when the underlying system is understood.

For example:

```text
Buffer Overflow
      ↓
Memory Layout
      ↓
Stack / Heap
      ↓
Calling Convention
      ↓
Assembly
      ↓
CPU
      ↓
Operating System
```

Likewise:

```text
Kernel Vulnerability
      ↓
System Call
      ↓
Kernel Subsystem
      ↓
Memory / Scheduler / Driver
      ↓
Hardware
```

And:

```text
Firmware Vulnerability
      ↓
Binary
      ↓
Compiler / Linker
      ↓
Memory Map
      ↓
Peripheral
      ↓
Microcontroller
```

Understanding the entire chain makes security analysis much more meaningful.

---

# References & Learning Resources

The journey is guided by a combination of books, official documentation, source code, experiments, and real-world systems.

### Systems & Operating Systems

* *Computer Systems: A Programmer's Perspective*
* *Operating Systems: Three Easy Pieces*
* MIT xv6
* Linux kernel documentation
* OSDev resources

The Linux kernel documentation provides dedicated material for kernel development, including APIs, locking, tracing, testing, development workflows, and Rust support.

### C++

* C++ Primer
* Effective Modern C++
* LearnCpp
* ISO C++ resources

### Algorithms

* Introduction to Algorithms (CLRS)
* Practical algorithmic problem solving
* Data-structure implementations

### Embedded

* STM32 reference manuals
* FreeRTOS documentation
* *Making Embedded Systems*
* ARM documentation
* Embedded Rust Book

The Embedded Rust Book covers bare-metal Rust development and specifically uses ARM Cortex-M systems as a major teaching platform.

### Rust

* The Rust Programming Language
* The Rustonomicon
* Embedded Rust Book
* Rust compiler documentation
* Linux kernel Rust documentation

Linux currently provides official documentation for getting started with Rust kernel development, including the required LLVM/Rust toolchain and Rust-specific kernel development workflow.

---

# What I Want This Repository to Demonstrate

When someone visits this repository, I want the code to demonstrate more than:

> "I know C++."

I want it to demonstrate:

### I understand memory.

I can reason about:

```text
Stack
Heap
Pointers
Ownership
Allocation
Virtual Memory
Cache
```

### I understand concurrency.

I can reason about:

```text
Threads
Processes
Mutexes
Semaphores
Atomics
Race Conditions
Deadlocks
Memory Ordering
```

### I understand operating systems.

I can reason about:

```text
Processes
Scheduling
Syscalls
Virtual Memory
Filesystems
IPC
Drivers
Kernel Interfaces
```

### I understand hardware.

I can reason about:

```text
CPU
Registers
Interrupts
DMA
Memory-Mapped I/O
Peripherals
Microcontrollers
```

### I understand networking.

I can reason about:

```text
Sockets
TCP/IP
UDP
HTTP
TLS
Concurrency
Distributed Systems
```

### I understand security.

I can reason about:

```text
Memory Corruption
Binary Formats
Kernel Attack Surfaces
Firmware
Reverse Engineering
Fuzzing
Exploitability
Secure Design
```

### And most importantly:

> **I can build systems that demonstrate that understanding.**

---

# Repository Status

🚧 **Active Development**

This repository will continuously evolve.

Some sections will contain polished projects.

Others will contain experiments, notes, incomplete implementations, benchmarks, failed approaches, and research.

That is intentional.

A genuine engineering journey includes unfinished work.

The repository will therefore preserve both:

```text
What worked
```

and

```text
What did not work — and why.
```

---

# Roadmap

The current roadmap spans approximately **18–24 months**, with the major progression being:

```text
01. Modern C++
        ↓
02. Data Structures & Algorithms
        ↓
03. Computer Architecture & Linux Internals
        ↓
04. Embedded Systems
        ↓
05. Operating Systems
        ↓
06. Backend Engineering
        ↓
07. High-Performance C++
        ↓
08. Operating System Development
        ↓
09. Backend at Scale
        ↓
10. Systems Security
        ↓
11. Rust Systems & Embedded Development
        ↓
12. Secure Systems Engineering
```

## The phases are not strictly sequential. Several tracks intentionally run in parallel because they reinforce each other. The original roadmap, for example, places data structures alongside C++, embedded development alongside OS work, and security throughout the entire journey rather than postponing it until the end.

# Final Objective

I am not pursuing systems engineering simply to add another language to my skill set.

I am pursuing it to understand **how computing systems actually work**.

From:

```text
A line of C
```

to:

```text
Machine Instructions
```

to:

```text
CPU Execution
```

to:

```text
Memory
```

to:

```text
Operating System
```

to:

```text
Network
```

to:

```text
Distributed Infrastructure
```

and eventually to:

```text
Secure, Reliable, High-Performance Systems
```

This repository is the record of that journey.

---

## If You're Exploring This Repository

Whether you're a:

* Systems Engineer
* Embedded Engineer
* C/C++ Developer
* Rust Developer
* Kernel Developer
* Security Engineer
* Reverse Engineer
* Backend Engineer
* Computer Engineering student
* Recruiter
* fellow engineer
* or simply someone curious about how computers work

you are welcome here.

Explore the projects.

Read the notes.

Inspect the implementations.

Challenge the design decisions.

Open an issue.

Suggest improvements.

And if something here helps you understand systems programming better, that's a success.

---

## Connect

**Systems Software • Embedded Systems • Operating Systems • C/C++ • Rust • Security**

This repository is a living representation of my progression from application-level development toward **low-level, performance-conscious, hardware-aware, and security-focused systems engineering**.

> **Build closer to the machine. Understand deeper. Engineer deliberately.**

---

### Repository Philosophy

```text
Understand the abstraction.
Understand what is underneath it.
Build it yourself.
Break it.
Debug it.
Measure it.
Secure it.
Document it.
Then build something harder.
```

**The journey starts at the source code and goes all the way down to the machine.**

