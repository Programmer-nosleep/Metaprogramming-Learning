#include <array>
#include <cstring>
#include <iostream>

// primary template
template<typename T>
T Max(T x, T y)
{
    std::cout << typeid(x).name() << std::endl;
    return x > y ? x : y;
}

// explicit instantion
template char Max(char x, char y);

// explicit specialization
template<> const char *Max<const char*>(const char *x, const  char *y)
{
    std::cout << typeid(x).name() << std::endl;
    std::cout << "Max <const char*>()" << std::endl;
    return strcmp(x,y) > 0 ? y : x;
}

// void example() {}

template<int size>
void print()
{
    char buffer[size];
    std::cout << "size : " << size << std::endl;
}

/*
template<typename T>
T Sum(T *parr, int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += parr[i];
    return sum;
}
*/

template<typename T, int size>
T Sum(T (&parr)[size])
{
    T sum {};
    for (int i = 0; i < size; i++)
        sum += parr[i];
    return sum;
}

// main function
int main(int argc, char *argv[])
{
    if (argc < 0)
    {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }

    int i = 3;
    print<sizeof(i)>();

    int arr[] = {1, 2, 3, 4, 5};
    int (&ref)[5] = arr;

    // auto sum = Sum(arr, 4);
    // std::cout << sum << std::endl;

    for (auto& x : arr)
    {
        std::cout << x << std::endl;
    }

    return 0;
}