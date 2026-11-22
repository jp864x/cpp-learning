# Animal Clinic — C++ OOP Exercise

A learning project in C++ and Object-Oriented Programming. It models different kinds of animals and a clinic that registers and manages them.

## Project overview

- `Animal` is the base class. It holds the attributes and behaviour that all animals share.
- `Cao` (dog) and `Gato` (cat) are derived classes. Each one adds or changes behaviour specific to its kind.
- `Clinica` (clinic) keeps a collection of animals, stored through pointers to the base class `Animal`, and displays them.

The exercise shows how shared behaviour can live in a base class while specific behaviour is implemented in derived classes.

## Source files

| File | Role |
|------|------|
| `main.cpp` | Entry point; creates the clinic and registers animals |
| `Animal.h` / `Animal.cpp` | Base class |
| `Cao.h` / `Cao.cpp` | Dog class |
| `Gato.h` / `Gato.cpp` | Cat class |
| `Clinica.h` / `Clinica.cpp` | Clinic: registration and display |

## Concepts practised

- **Classes and objects:** attributes, constructors and methods.
- **Inheritance:** `Cao` and `Gato` derive from `Animal`.
- **Encapsulation:** private attributes, accessed through getters and setters.
- **Pointers:** animals are stored and managed through `Animal*`.
- **Polymorphism:** virtual methods let each derived class supply its own behaviour.
- **Abstract classes:** a pure virtual method (`= 0`) makes a class impossible to instantiate.
- **Strings:** building messages with `+` and `to_string()`.
- **Random numbers:** `rand()` with `srand()` seeded once at program start.
- **Linking:** declarations need matching definitions, or the build fails at link time.

## Examples of behaviour

- A dog reports how many kilometres it ran in a random amount.
- A cat reports random counts of jars knocked over and people scratched.
- A cat's exercise reduces its weight by 10%, but only if the result stays at or above the 2.5 kg minimum.
- The clinic displays its animals with their status (in the clinic or not).

## Building

The project uses CMake and was developed in CLion on Windows with the MinGW toolchain.

1. Open the project folder in CLion (it reads `CMakeLists.txt`).
2. Choose a Debug profile and build the `ex2feitopormim` target.

## What I learned

Virtual and pure virtual functions, abstract classes, linker errors caused by missing definitions, string concatenation, random-number generation, initialising arrays of pointers, and checking conditions before changing an object's state. Detailed notes, mistakes and open questions are in [`learning-notes.txt`](learning-notes.txt).

## Known open points

- The clinic's array of pointers must be initialised before use.
- Ownership of animals (who creates and deletes them) is not yet decided in the code.
- The display methods have small syntax issues still to be cleaned up.
- Registration should check for a full array and for duplicates.

## Technologies

- C++
- CMake
- CLion

## Status

A learning exercise, still open to improvement, testing and refactoring.
