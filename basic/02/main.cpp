#include <iostream>

/*
template<typename T>
void print(std::initializer_list<T> args)
{
    for (auto it = args.begin(); it != args.end(); it++)
        std::cout << *it << " ";
}
*/

void print()
{
   std::cout << "\n";
}

template<typename T, typename... Params>
void print(T &&a, Params&& ...args)
{
    std::cout << a;
    if (sizeof...(args) != 0)
    {
        std::cout << ", ";
    }
    print(std::forward<Params>(args)...);
}

int main(int argc, char const *argv[])
{
    if (argc < 0)
    {
        std::cout << "Hello, World!" << std::endl;
    }
    print( 1,2.5,3,4,5, "kontol" );
    return 0;
}