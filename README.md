# QuickMath
An attempt at a math library with various mathematical functions written i C++.
Doesn't use the `cmath` header and uses only the standard C++ library (but does
use the `array` header).

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
A collection of functions to perform Linear Algebra calculations. Currently
only supports calculations involving vectors.
### Existing functions
* getVector
* addVector
* subtractVector
* scalarMultiply
* vectorSum
* vectorDifference
* scalarProduct
* dotProduct
* crossProduct
* getLength
* calculateLength
* calculateAngle

### Trig
A collection of functions to perform trigonometric operations. Currently
supports sinus, cosine, and tangent functions as well as their inverses.
