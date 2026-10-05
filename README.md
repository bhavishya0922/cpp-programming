# 🚀 C++ Programming — Object-Oriented Design & STL Mastery

<div align="center">

  [![Language](https://img.shields.io/badge/Language-Modern_C%2B%2B17-blue?style=for-the-badge&logo=c%2B%2B)](https://en.cppreference.com/)
  [![Compiler](https://img.shields.io/badge/Compiler-GCC_/_Clang-success?style=for-the-badge&logo=gnu)](https://gcc.gnu.org/)
  [![Paradigm](https://img.shields.io/badge/Paradigm-OOP_%7C_Generic-purple?style=for-the-badge)](https://isocpp.org/)
  [![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)

  <br/>

  **A comprehensive, structured repository of modern C++ programming covering foundational syntax, modular functions, object-oriented design patterns, polymorphic interfaces, the Standard Template Library (STL), and exception handling.**

  <br/>

  [Learning Objectives](#-learning-objectives) • [Directory Structure](#-repository-structure) • [How to Compile](#-compilation--execution) • [Author](#-author)

</div>

---

## 📌 Repository Overview

This repository captures my active journey in **Modern C++ (C++17)** as a 3rd-semester Computer Science & Engineering undergraduate. 

Moving beyond procedural C, this codebase explores the depth of C++: resource acquisition is initialization (**RAII**), encapsulation and inheritance hierarchies, dynamic dispatch via virtual function tables (**vtables**), generic containers and algorithms in the **STL**, and robust domain error handling with custom exceptions.

---

## 🎯 Learning Objectives

- Bridge procedural memory management with C++ **RAII** and smart pointers (`std::unique_ptr`).
- Apply the 4 pillars of Object-Oriented Programming: **Encapsulation**, **Abstraction**, **Inheritance**, and **Polymorphism**.
- Utilize STL containers (`vector`, `unordered_map`, `set`) and modern lambda algorithms (`std::sort`, `std::accumulate`).
- Write robust, leak-free, compiler-warning-free C++ code with `-Wall -Wextra -std=c++17`.

---

## 📂 Repository Structure

| Module | Title | Key Concepts & Patterns | Programs |
|:---|:---|:---|:---:|
| **[`01-basics`](./01-basics)** | Foundations & Namespaces | `std::cout`, namespaces (`::`), type inference (`auto`), const qualifiers | 3 |
| **[`02-functions`](./02-functions)** | Functions & Overloading | Pass by reference (`&`), compile-time function overloading, inline functions | 3 |
| **[`03-arrays`](./03-arrays)** | Modern Arrays & Matrices | `std::array`, 2D vectors, in-place 90° clockwise matrix rotation | 2 |
| **[`04-strings`](./04-strings)** | String Algorithms | `std::string` methods (`find`, `replace`, `substr`), frequency array anagram check | 2 |
| **[`05-pointers`](./05-pointers)** | Memory & Smart Pointers | Dynamic heap (`new`/`delete`), dangling pointer prevention, `std::unique_ptr` RAII | 2 |
| **[`06-oop`](./06-oop)** | Classes & Encapsulation | Encapsulation, access specifiers, parameterized/copy constructors, destructors | 2 |
| **[`07-inheritance`](./07-inheritance)** | Inheritance Hierarchies | Single, multilevel, and hierarchical inheritance, base class initialization | 1 |
| **[`08-polymorphism`](./08-polymorphism)** | Dynamic Polymorphism | Virtual functions, abstract base classes, pure virtual interfaces, virtual destructors | 1 |
| **[`09-stl`](./09-stl)** | STL Containers & Lambdas | `std::vector`, `std::unordered_map`, `std::set`, modern lambda predicates | 2 |
| **[`10-file-handling`](./10-file-handling)** | C++ File Streams | `std::ifstream`, `std::ofstream`, `std::fstream`, structured logging | 1 |
| **[`11-exception-handling`](./11-exception-handling)** | Robust Error Handling | `try`, `catch`, `throw`, custom domain exceptions inheriting `std::exception` | 1 |

---

## ⚙️ Compilation & Execution

All programs are written targeting the **C++17** standard and can be compiled using GCC (`g++`), Clang, or MSVC.

### Single File Compilation
```bash
# Standard compilation with C++17 and compiler warnings
g++ -std=c++17 -Wall -Wextra 06-oop/01_bank_account_encapsulation.cpp -o bank_app

# Execute binary
./bank_app
```

### Compiling with Optimized Flags
```bash
g++ -O2 -std=c++17 -Wall 09-stl/01_stl_vector_and_algorithms.cpp -o stl_demo
./stl_demo
```

---

## 📈 Learning Progress & Roadmap

- [x] Procedural foundations & type conversions
- [x] References and function signatures
- [x] Encapsulation & access control
- [x] Inheritance models & constructor chaining
- [x] Abstract base classes & runtime polymorphism
- [x] Basic STL containers (`vector`, `map`, `set`)
- [ ] Advanced Template Metaprogramming (Sem 4)
- [ ] Concurrency and Multi-threading (`std::thread`, `std::mutex`)

---

## 📄 License

This repository is licensed under the [MIT License](LICENSE).

---

## 👨‍💻 Author

**Bhavishya Dewangan**  
*B.Tech Computer Science & Engineering (3rd Semester)*  
*Raipur, Chhattisgarh, India*  
GitHub: [@bhavishya0922](https://github.com/bhavishya0922) | Email: bhavish0922@gmail.com
