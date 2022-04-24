#  C++ Operator Precedence

| Precedence | Operator | Description | Associativity |
| :---: | :--- | :--- | :---: |
| 1 | :: | Scope resolution | &rarr; |
| 2 | a++ | Suffix increment |  |
|   | a-- | Suffix Decrement |  |
|   | type() | Functional cast |  |
|   | a() | Function call |  |
|   | a[] | Subscript |  |
|   | . or -> | Member access |  |
| 3 | ++a | Prefix increment | &larr; |
|   | --a | Prefix decrement |  |
|   | ! | Logical Not |  |
|   | ~ | Bitwise Not |  |
|   | (type) | C-style cast |  |
|   | \*a | Dereference |  |
|   | &a | Address of |  |
|   | sizeof | Size of | |
|   | co_await | await expression | |
|   | new | Dynamic memory allocation | |
|   | delete | Dynamic memory allocation | |
| 4 | .* or ->* | Pointer to member | &rarr; |
| 5 | * | Multiplication | |
|   | / | Division | |
|   | % | Modulus | |
| 6 | + | Addition | |
|   | - | Subtraction | |
| 7 | << >> | Bit shift | |
| 8 | <=> | Three way comparison operator | |
| 9 | < | Less than | |
|   | <= | Less than or equal | |
|   | > | Greater than | |
|   | >= | Greater than or equal | |
| 10 | == | equals | |
|    | != | not equals | |
| 11 | & | Bitwise AND | |
| 12 | ^ | Bitwise XOR | |
| 13 | &#124; | Bitwise OR | |
| 14 | && | Logical AND | |
| 15 | &#124;&#124; | Logical OR | | 
| 16 | a ? b : c | Ternary Operator | &larr; |
|    | throw | throw operator | |
|    | co_yield | yeild expression | |
|    | = | Assignment | |
|    | += | Compound assignment sum | |
|    | -= | Compound assignment difference | |
|    | *= | Compound assignment product | |
|    | /= | Compound assignment quotient | |
|    | %= | Compound assignment modulus | |
|    | <<= >>= | Compund assignment bit shift | |
|    | &= | Compound assignment bitwise AND | |
|    | ^= | Compound assignmnet bitwise XOR | |
|    | &#124;= | Compound assignment bitwise OR | |
| 17 | , | Comma | &rarr; |

