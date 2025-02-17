[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/YgnHs1TM)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=17929538&assignment_repo_type=AssignmentRepo)
# COMP0012 Coursework 1

Inspired by Processing, this domain-specific language (DSL) is designed to provide an expressive and structured approach to digital art and simulation programming.

### 1. Particle System
#### Motivation
Particle systems are widely used in digital art and animations to create dynamic effects such as smoke, fire, and fluid simulations. By introducing particle declarations and system management, this language provides an intuitive way to create and control particles in a structured manner. This abstraction simplifies the complexity of managing large numbers of particles, enabling artists and developers to focus on high-level behaviors rather than low-level implementation details.
#### Implementation
Particles are declared using the particle keyword, followed by an identifier and initialization parameters such as position (x, y), velocity (vx, vy), and lifespan. Additionally, a particle system can be instantiated using the system keyword, allowing for centralized control of multiple particles. The language also supports method calls on particle systems, such as adding new particles dynamically using system.add(new particle(...)).

### 2. Array Slicing
#### Motivation
Array slicing enables efficient retrieval of subsets of an array, reducing the need for verbose loops when working with structured data. It is particularly useful for managing graphical elements, allowing sections of an array to be processed selectively.
#### Implementation
The language supports slicing using the start:end notation within square brackets. The parser ensures correct syntax, allowing users to extract segments of an array with optional start and end values. This feature enhances flexibility in animations and data transformations.

### 3. Array Constructs
#### Motivation
Arrays provide a structured way to store multiple values, which is crucial for handling lists of particles, animation states, and other graphical data. They enable efficient access and manipulation of collections, reducing redundancy in code.
#### Implementation
Arrays are declared using square brackets [] and accessed via zero-based indexing. The language supports expressions within indexes, multi-dimensional arrays, and array element assignment through arr[index] = value. Strict parsing ensures validity, preventing issues like empty indexes or malformed expressions.

### 4. Functions and Function Calls
#### Motivation
Functions allow for modular programming by encapsulating repetitive logic, improving both readability and maintainability. They are crucial for defining reusable computations, procedural animations and structured workflows.
#### Implementation
Functions are declared using the function keyword, with a name, parameters and a block of statements. The parser enforces correct syntax, ensuring proper scoping and valid parameter handling. Function calls can be used as expressions, supporting operations within assignments and conditionals.

### 5. Method Calls and Property Access
#### Motivation
To facilitate an object-oriented approach in handling graphical elements, the language supports method calls and property access. This makes it easier to interact with objects like particles and systems while maintaining clean and modular code.
#### Implementation
Method calls use dot notation, allowing constructs like particleSystem.get(i).update(). The parser distinguishes between function calls, property access, and method calls, ensuring correct precedence and seamless parsing of complex expressions.

### 6. Control Flow Structures
#### Motivation
Conditional statements and loops enable dynamic behaviors in procedural graphics. They allow branching logic and iterative processing, which are fundamental for animations and simulations.
#### Implementation
The language supports if and if-else statements for conditional execution, ensuring correct block scoping. Loop constructs such as for and while facilitate numerical iteration and structured data processing, allowing smooth integration with particle systems and animations.

### 7. Binary Expressions
#### Motivation
Mathematical operations and logical conditions are necessary for handling animation logic and decision-making. Ensuring correct precedence in operations improves reliability in computations.
#### Implementation
Binary expressions (+, -, *, /, &&, ||) follow explicit precedence rules to avoid ambiguity. Comparison operators (==, !=, <, >, <=, >=) support evaluations in control flow structures, with type checking to prevent invalid comparisons.

### 8. Unary and Postfix Operators
#### Motivation
Unary and postfix operators provide shorthand notation for modifying values, improving readability and reducing redundant code. They are commonly used for loop counters and dynamic transformations.
#### Implementation
Unary operators (-, !, ~, ++, --) apply to numeric values and variables, with validation to prevent misuse. Postfix operators (x++, y--) are restricted to variables to ensure consistent evaluation.

### 9. Return Statements
#### Motivation
Return statements provide output values from functions, enabling modular design and efficient computation. They are particularly useful for mathematical operations and procedural algorithms.
#### Implementation
Functions can return values using the return keyword. The parser ensures return statements appear only inside function bodies, rejecting invalid placements in global or loop contexts.


