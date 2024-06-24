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

    virtual void print();

protected:
    _Tn m_o;
    std::string m_str;
};

template <class _Tnn>
class TempContainer : public Temp<_Tnn>
{
public:
    TempContainer() = default;
    ~TempContainer() = default;

    void print(_Tnn arg);
    void print() override;
};

template <class _Tn, class ...Args>
Temp<_Tn, Args...>::Temp(const _Tn& o)
    : m_o(o)
{}

template <class _Tn, class ...Args>
void Temp<_Tn, Args...>::print()
{
    std::cout << "type : " << typeid(_Tn).name() << "\n";
    std::cout << "value : " << m_o << std::endl;
}

template <class _Tnn>
void Temp<_Tnn>::print(_Tnn arg)
{
    
}

int main(int argc, char** argv)
{
    Temp<std::string>o("HelloWorld!");
    o.print();
    return 0;
}