#include "Header.hpp"

template<class _Tn, class ...Args>
Header<_Tn, Args...>::Header(const _Tn& cls)
    : m_cls(cls)
{}

template<class _Tnn>
void Header2<_Tnn>::print(_Tnn arg) {
    std::cout << arg;
}

template<class _Tnn>
void Header2<_Tnn>::print() {
    if(std::is_fundamental<_Tnn>::value)
    {
        std::cout << "Type: " << typeid(_Tnn).name() << std::endl;
    }
    std::cout << "Value: " << this->m_cls << std::endl;
}

template<class _Tn, class ...Args>
void Header<_Tn, Args...>::print() {
    if(std::is_fundamental<_Tn>::value)
    {
        std::cout << "Type: " << typeid(_Tn).name() << " (fundamental type)" << std::endl;
    }
    std::cout << "Value: " << m_cls << std::endl;
}