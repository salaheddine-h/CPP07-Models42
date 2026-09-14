#include "Array.hpp"

int main()
{
    // 1. Empty array
    std::cout << "===== Empty array =====" << std::endl;
    Array<int> a;
    std::cout << "a.size() = " << a.size() << std::endl;


    // 2. Array with size
    std::cout << "\n===== Array with size =====" << std::endl;
    Array<int> b(5);
    std::cout << "b.size() = " << b.size() << std::endl;


    // 3. operator[]
    std::cout << "\n===== operator[] =====" << std::endl;
    b[0] = 10;
    b[1] = 20;
    b[2] = 30;

    std::cout << "b[0] = " << b[0] << std::endl;
    std::cout << "b[1] = " << b[1] << std::endl;
    std::cout << "b[2] = " << b[2] << std::endl;


    // 4. Copy constructor
    std::cout << "\n===== Copy constructor =====" << std::endl;
    Array<int> c(b);

    std::cout << "b[0] = " << b[0] << std::endl;
    std::cout << "c[0] = " << c[0] << std::endl;

    c[0] = 100;

    std::cout << "After changing c[0]:" << std::endl;
    std::cout << "b[0] = " << b[0] << std::endl;
    std::cout << "c[0] = " << c[0] << std::endl;


    // 5. Assignment operator
    std::cout << "\n===== Assignment operator =====" << std::endl;
    Array<int> d(2);
    d[0] = 7;
    d[1] = 8;

    d = b;

    std::cout << "d.size() = " << d.size() << std::endl;
    std::cout << "d[0] = " << d[0] << std::endl;
    std::cout << "d[1] = " << d[1] << std::endl;


    // 6. Out of bounds
    std::cout << "\n===== Out of bounds =====" << std::endl;
    try
    {
        std::cout << b[5] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught!" << std::endl;
    }

    return 0;
}