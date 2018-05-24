# QuickMath
An attempt at a math library with various mathematical functions written i C++.

## Existing Implementations
* Math
* Factorial
* Pascal
* LinAlg
* Trig

### Math
Basic mathematical functions that are used by the other parts of the library.
#### Existing functions
* power
* sqRoot

### Factorial
A simple function to calculate the factorial of a number.

### Pascal
Two functions, one to calculate Pascal's triangle and one to print Pascal's
triangle.

### LinAlg
A collection of functions to perform Linear Algebra calculations. Currently supports range of calculations involving vectors as well as basic calculations involving matrices. All vectors and matrices are at the moment only 3-dimensional.
#### Existing functions
* getVector
* addVector
* subtractVector
* scalarMultiply
* vectorSum
* vectorDifference
* vectorScalarMultiplication
* dotProduct
* crossProduct
* getLength
* calculateLength
* calculateAngle
* getMatrix
* matrixSum
* matrixDifference
* matrixScalarMultiplication
* matrixMultiplication
* calculateDeterminant

### Trig
A collection of functions to perform trigonometric operations. Currently
supports sinus, cosine, and tangent functions as well as their inverses.

### Combi
A collection of simple functions to calculate the amount of permutations and
combinations both without repetition and with repetition.
#### Existing functions
* calculatePermutations
* calculateRepetitivePermutations
* calculateCombinations
* calculateRepetitiveCombinations
