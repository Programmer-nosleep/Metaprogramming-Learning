#ifndef Header_HPP
#define Header_HPP

#include <iostream>
#include <type_traits>

template <class _Tn,class... Args> 
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

#endif // Header_HPP