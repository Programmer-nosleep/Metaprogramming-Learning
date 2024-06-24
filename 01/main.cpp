#include <cassert>

#include <iostream>
#include <string>
#include <type_traits>

template <class _Tn, class ...Args>
class Temp
{
public:
    Temp() = default;
    ~Temp() = default;

    explicit Temp(const _Tn& o);

    virtual void print(_Tn value);

protected:
    _Tn m_o;
    std::string m_str;
};

template <class _Tnn, class ...Args>
class TempContainer : public Temp<_Tnn, Args...>
{
public:
    TempContainer() = default;
    ~TempContainer() = default;

    void print(_Tnn value, Args... args);
    void print() override;
};

template <class _Tn, class ...Args>
Temp<_Tn, Args...>::Temp(const _Tn& o)
    : m_o(o)
{}

template <class _Tn, class ...Args>
void Temp<_Tn, Args...>::print(_Tn value)
{
    std::cout << "type: " << typeid(_Tn).name() << "\n";
    std::cout << "printing from temp: " << value << "\n";
}

// template <class _Tnn, class ...Args>
// void TempContainer<_Tnn, Args...>::print(_Tnn value, Args... args)
// {
//     this->m_o = value;
//     this->m_o = print(args...);
// }

int main(int argc, char** argv)
{
    Temp<std::string> out;
    out.print("HelloWorld!");

    return 0;
}