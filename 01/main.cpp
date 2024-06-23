#include <header.hpp>

int main(int argc, char** argv)
{
    Header<int>decimal(10);
    decimal.print();

    Header<std::string>out("HelloWorld!");
    out.print();
    return 0;
}