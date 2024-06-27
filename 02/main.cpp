#include <iostream>
#include <string>
#include <variant>
#include <vector>
#include <type_traits>

template <class _T, class ...Args>
class Temp
{
public:
    Temp() = default;
    ~Temp() = default;

    virtual void print();

protected: 
    std::vector<std::variant<_T, Args...>> values;

    template <typename _Tn>
    void add_value(const _Tn& value);
};

template <class _Ty, class ...Args>
class TempContainer : public Temp<_Ty, Args...>
{
public:
    TempContainer() = default;
    ~TempContainer() = default;

    void print(_Ty value);
    void print(_Ty value, Args... args);
};

template <class _T, class ...Args>
template <typename _Tn>
void Temp<_T, Args...>::add_value(const _Tn &value)
{
    values.push_back(value);
}

template<class _T, class ...Args>
void Temp<_T,Args...>::print()
{
    for(const auto& value : values)
    {
        std::visit([](const auto& v){
            std::cout << v << " ";
        }, value);
    }
    std::cout << "\n";
}

template <class _Ty, class ...Args>
void TempContainer<_Ty, Args...>::print(_Ty value)
{
    this->add_value(value);
    Temp<_Ty, Args...>::print();
}

template <class _Ty, class ...Args>
void TempContainer<_Ty, Args...>::print(_Ty value, Args... args)
{
    this->add_value(value);
    (this->add_value(args), ...);
    Temp<_Ty, Args...>::print();
}

int main(int argc, char** argv)
{
    TempContainer<std::string, int> out;
    out.print("HelloWorld", 101);

    return 0;
}