# QuickMath
An attempt at a math library with various mathematical functions written i C++.

## Building
To build the library, just run:
```
mkdir build && cd build && cmake ..
```
Then just run `./QuickMath.out` to run main with any functions from the
library. To clean up the build files just run `rm -rf build`.

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
A collection of functions to perform Linear Algebra calculations. Currently supports range of calculations involving vectors as well as basic calculations involving matrices. Vectors can be initialized with values to be 1, 2, 3 or 4 dimensional but can also be initialized with a std::vector to be of any dimension. Matrices can be of any dimension.
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
* size
* getMatrix
* setMatrix
* getRowVector
* getColumnVector
* getSubMatrix
* getRows
* getColumns
* zero
* linearTransform
* matrixSum
* matrixDifference
* matrixScalarMultiplication
* matrixMultiplication
* linearTransformation
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
