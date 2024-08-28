#include <iostream>
#include <climits> // For CHAR_BIT
#include <cstddef> // For nullptr_t
#include <cfloat>

int main() {
    std::cout << "Number of bits capacity of standard data types:" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;

    std::cout << "char: " << CHAR_BIT << " bits" << std::endl;
    std::cout << "char min: " << CHAR_MIN << " char max: " << CHAR_MAX << std::endl << std::endl;

    std::cout << "short: " << sizeof(short) * CHAR_BIT << " bits" << std::endl;
    std::cout << "short min: " << SHRT_MIN << " short max: " << SHRT_MAX << std::endl << std::endl;

    std::cout << "int: " << sizeof(int) * CHAR_BIT << " bits" << std::endl;
    std::cout << "int min: " << INT_MIN << " int max: " << INT_MAX << std::endl << std::endl;

    std::cout << "long: " << sizeof(long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long min: " << LONG_MIN << " long max: " << LONG_MAX << std::endl << std::endl;

    std::cout << "long long: " << sizeof(long long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long long min: " << LLONG_MIN << " long long max: " << LLONG_MAX << std::endl << std::endl;

    std::cout << "unsigned char: " << sizeof(unsigned char) * CHAR_BIT << " bits" << std::endl;
    std::cout << "unsigned char min: " << 0 << " unsigned char max: " << UCHAR_MAX << std::endl << std::endl;

    std::cout << "unsigned short: " << sizeof(unsigned short) * CHAR_BIT << " bits" << std::endl;
    std::cout << "unsigned short min: " << 0 << " unsigned short max: " << USHRT_MAX << std::endl << std::endl;

    std::cout << "unsigned int: " << sizeof(unsigned int) * CHAR_BIT << " bits" << std::endl;
    std::cout << "unsigned int min: " << 0 << " unsigned int max: " << UINT_MAX << std::endl << std::endl;

    std::cout << "unsigned long: " << sizeof(unsigned long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "unsigned long min: " << 0 << " unsigned long max: " << ULONG_MAX << std::endl << std::endl;

    std::cout << "unsigned long long: " << sizeof(unsigned long long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "unsigned long long min: " << 0 << " unsigned long long max: " << ULLONG_MAX << std::endl << std::endl;

    std::cout << "float: " << sizeof(float) * CHAR_BIT << " bits" << std::endl;
    std::cout << "float min: " << FLT_MIN << " float max: " << FLT_MAX << std::endl;
    std::cout << "float precision: " << FLT_DIG << " digits" << std::endl << std::endl;

    std::cout << "double: " << sizeof(double) * CHAR_BIT << " bits" << std::endl;
    std::cout << "double min: " << DBL_MIN << " double max: " << DBL_MAX << std::endl;
    std::cout << "double precision: " << DBL_DIG << " digits" << std::endl << std::endl;

    std::cout << "long double: " << sizeof(long double) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long double min: " << LDBL_MIN << " long double max: " << LDBL_MAX << std::endl;
    std::cout << "long double precision: " << LDBL_DIG << " digits" << std::endl << std::endl;

    std::cout << "bool: " << sizeof(bool) * CHAR_BIT << " bits" << std::endl;
    std::cout << "bool min: " << false << " bool max: " << true << std::endl << std::endl;

    std::cout << "nullptr_t: " << sizeof(std::nullptr_t) * CHAR_BIT << " bits" << std::endl;

    return 0;
}
/*
Number of bits capacity of standard data types:
------------------------------------------------
char: 8 bits
char min: -128 char max: 127

short: 16 bits
short min: -32768 short max: 32767

int: 32 bits
int min: -2147483648 int max: 2147483647

long: 64 bits
long min: -9223372036854775808 long max: 9223372036854775807

long long: 64 bits
long long min: -9223372036854775808 long long max: 9223372036854775807

unsigned char: 8 bits
unsigned char min: 0 unsigned char max: 255

unsigned short: 16 bits
unsigned short min: 0 unsigned short max: 65535

unsigned int: 32 bits
unsigned int min: 0 unsigned int max: 4294967295

unsigned long: 64 bits
unsigned long min: 0 unsigned long max: 18446744073709551615

unsigned long long: 64 bits
unsigned long long min: 0 unsigned long long max: 18446744073709551615

float: 32 bits
float min: 1.17549e-38 float max: 3.40282e+38
float precision: 6 digits

double: 64 bits
double min: 2.22507e-308 double max: 1.79769e+308
double precision: 15 digits

long double: 128 bits
long double min: 3.3621e-4932 long double max: 1.18973e+4932
long double precision: 18 digits

bool: 8 bits
bool min: 0 bool max: 1

nullptr_t: 64 bits
*/
