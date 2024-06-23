#include <iostream>
#include <type_traits>

template <class _Tn, class... Args>
class Header
{
public:
    Header() = default;
    ~Header() = default;
    explicit Header(const _Tn& cls);

    virtual void print();

protected:
    _Tn m_cls;
};

template<class _Tnn>
class Header2 : public Header<_Tnn> {
public:
    Header2() = default;
    ~Header2() = default;
    explicit Header2(const _Tnn& o) : Header<_Tnn>(o) {}

    void print(_Tnn arg);

    void print() override;
};

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
    std::cout << "Type: " << typeid(_Tnn).name() << std::endl;
    std::cout << "Value: " << this->m_cls << std::endl;
}

template<class _Tn, class ...Args>
void Header<_Tn, Args...>::print() {
    std::cout << "Type: " << typeid(_Tn).name() << " (fundamental type)" << std::endl;
    std::cout << "Value: " << m_cls << std::endl;
}

int main(int argc, char** argv)
{
    Header<int>decimal(10);
    decimal.print();

    Header<std::string>out("HelloWorld!");
    out.print();
    return 0;
}