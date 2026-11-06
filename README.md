# SCP Adventure Engine (C++)

A data-driven text adventure game inspired by the SCP Foundation universe.

This project began as a simple procedural Python game created for an introductory programming course and was later completely re-engineered in C++. The original single-file script was redesigned into a modular application featuring object-oriented architecture, puzzle subsystems, and a SQLite-powered world database.

The project demonstrates software engineering, algorithm design, and database integration through the development of a scalable game engine capable of loading rooms, puzzles, objects, and interactions dynamically at runtime.

---
## Evolution of the Project 
| Original Version | Enhanced Version | 
|-----------------|------------------| 
| Python | C++ | 
| Single file | Multi-file architecture | 
| Hardcoded rooms | SQLite database | 
| Procedural logic | Object-oriented design | 
| Basic commands | Puzzle engine | 
| Course assignment | Extensible game engine |

## Features

### Object-Oriented Architecture
- Modular class design
- Separation of responsibilities across engine subsystems
- Encapsulation of game state and behavior
- Extensible architecture for future game mechanics

### Puzzle Engine
- Multi-step puzzle interactions
- State-driven puzzle progression
- Locked room and gated progression mechanics
- Deterministic command routing

### Data-Driven Design
- SQLite-powered game world
- Dynamic room loading
- Database-defined puzzles and interactions
- Content can be updated without recompiling source code

### Defensive Programming
- Input validation
- Invalid state prevention
- Consistent command processing
- Robust error handling

---

## Technologies

- C++
- SQLite3
- Visual Studio
- Git
- Object-Oriented Design Principles

---

## Architecture Overview

The project is organized around several core systems:

### GameEngine
Coordinates overall gameplay flow and player interaction.

### Player
Maintains inventory, progress, and player state.

### Room
Represents game locations, descriptions, exits, and environmental data.

### PuzzleEngine
Handles puzzle execution, state transitions, and progression logic.

### DatabaseManager
Loads rooms, objects, puzzles, and world data from SQLite.

---

## Example Gameplay

```text
=============================================
  SCP Foundation: Secure, Contain, Protect.
=============================================

You have been escorted into a dark room by armed guards. They leave, locking the door.
After a few moments the lights click on and you hear a voice over the intercom:

"D-class personnel, you have now entered the containment site for SCP-1048-A.
Today, you will demonstrate the new containment procedures.
A series of puzzles have been developed to ensure limited access to the subject.
Be sure not to enter the containment area before ensuring the protocol has been implemented
Following successful interaction with the SCP, you will be given a full pardon."

Type 'help' for a list of commands.

> help
Available commands:
  look            - Examine your surroundings
  go <direction>  - Move north, south, east, or west
  take <item>     - Pick up an item in the room
  use <target>    - Use an item or interact with something
  inventory       - View items you are carrying
  help            - Show this help message
  quit            - Exit the game

> go east
You enter the Control Room.

> look
You are in a room alive with complex technology computing unknown tasks.
There is a door to the west, and a door to the east.
The door to the east has the words "containment area" scrawled across it.
You see:
 - console

> use console
The console is locked. It needs a keycard.
