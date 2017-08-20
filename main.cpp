#include "common.h"
#include "math/complex.h"

#include <iostream>

/**
 * @brief The main application entry point.
 *
 * @return int
 */
int main()
{
    Math::Complex c( 10, 1 );
    Math::Complex d( 1, 1 );

    std::cout << std::boolalpha << ( c == d ) << std::endl;

    return 0;
}
