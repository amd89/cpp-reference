# C++ Datatype Reference


### Integers

Intergeres can be entered in different number sets such as:
- **Octal** with a leading 0
- **Hexadecimal** with a leading 0x
- **Binary** with a leading 0b  

Note you cannot do math with the short datatype values will be implicitly cast as ints by the compiler

| Type | Size(bytes) | Min | Max |
| :---: | :---: | :---: | :---:|
| short | 2 | -32768 | 32767 |
| unsigned short | 2 | 0 | 65535 |
| int | 4 | -2147483648 | 2147483647 |
| unsigned int | 4 | 0 | 4294967295 |
| long | 4 | -2147483648 | 2147483647 |
| unsigned long | 4 | 0 | 4294967295 |
| long long | 8 | -9223372036854775808 | 9223372036854775807 |
| unsigned long long | 8 | 0 | 18446744073709551615 |

### Decimals

Decimals can be entered in scientific notation using e eg. 2.4e3 is 2400

| Type | Size(bytes) | Precision(digits)|
| :---: | :---: | :---: |
| float | 4 | 6 |
| double | 8 | 15 |
| long double | 16 | 18 |

### Others

characters(char) can be used as the ascii number for the character but you cannot do math with them the compiler will implicitly cast as in

| Type | Size|
| :---: | :---: |
| bool | 1 |
| char | 1 |

Note all sizes are in bytes
