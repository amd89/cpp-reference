/*
dataTypes.cpp
Displays tables of usefull information on the primative data types
Andre Dallaire
20/04/2022
*/

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main(){


    cout << left;
    cout << "C++ Datatype Reference" << endl;
    cout << endl;
    cout << endl;
    //ints
    cout << "Integers" << endl;
    cout << endl;
    cout << setw(22) << "Type" << setw(6) << "Size" << setw(22) << "Min" << setw(22) << "Max" << endl;
    //short
    cout << setw(22) << "short" << setw(6) << sizeof(short) << setw(22) << numeric_limits<short>::min() << setw(22) << numeric_limits<short>::max() << endl;
    cout << setw(22) << "unsigned short" << setw(6) << sizeof(unsigned short) << setw(22) << numeric_limits<unsigned short>::min() << setw(22) << numeric_limits<unsigned short>::max() << endl;
    //int
    cout << setw(22) << "int" << setw(6) << sizeof(int) << setw(22) << numeric_limits<int>::min() << setw(22) << numeric_limits<int>::max() << endl;
    cout << setw(22) << "unsigned int" << setw(6) << sizeof(unsigned int) << setw(22) << numeric_limits<unsigned int>::min() << setw(22) << numeric_limits<unsigned int>::max() << endl;
    //long
    cout << setw(22) << "long" << setw(6) << sizeof(long) << setw(22) << numeric_limits<long>::min() << setw(22) << numeric_limits<long>::max() << endl;
    cout << setw(22) << "unsigned long" << setw(6) << sizeof(unsigned long) << setw(22) << numeric_limits<unsigned long>::min() << setw(22) << numeric_limits<unsigned long>::max() << endl;
    //long long
    cout << setw(22) <<  "long long" << setw(6) << sizeof(long long) << setw(22) << numeric_limits<long long>::min() << setw(22) << numeric_limits<long long>::max() << endl;
    cout << setw(22) << "unsigned long long" << setw(6) << sizeof(unsigned long long) << setw(22) << numeric_limits<unsigned long long>::min() << setw(22) << numeric_limits<unsigned long long>::max() << endl;

    //doubles
    cout << endl;
    cout << "Decimals" <<endl;
    cout << endl;
    cout << setw(12) << "Type" << setw(6) << "Size" << setw(10) << "Precision" << endl;;
    //float
    cout << setw(12) << "float" << setw(6) << sizeof(float) << setw(10) << numeric_limits<float>::digits10  << endl;
    //double
    cout << setw(12) << "double" << setw(6) << sizeof(double) << setw(10) << numeric_limits<double>::digits10  << endl;
    //long double
    cout << setw(12) << "long double" << setw(6) << sizeof(long double) << setw(10) << numeric_limits<long double>::digits10 <<  endl;
    cout << endl;
    //char and bool
    cout << "Others" << endl;
    cout << endl;
    cout << setw(6) << "Type" << setw(6) << "Size" << endl;
    cout << setw(6) << "bool" << setw(6) << sizeof(bool) << endl;
    cout << setw(6) << "char" << setw(6) << sizeof(char) << endl;
    cout << endl;

    cout << "Note all sizes are in bytes" << endl;
}
