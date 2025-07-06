#include <iostream>

template<typename T, int cols>
class PrettyPrinter
{
private:
    T* m_pdata_;
public:
    PrettyPrinter(T *value) : m_pdata_(value) {}
    void print()
    {
        std::cout << "cols : " << cols << std::endl;
        std::cout << *m_pdata_ << std::endl;
    }
    T* getData()
    {
        return m_pdata_;
    }
};

template<typename T>
class PrettyPrinter<T, 80>
{
private:
    T* m_pdata_;
public:
    PrettyPrinter(T *value) : m_pdata_(value) {}
    void print()
    {
        std::cout << *m_pdata_ << std::endl;
    }
    T* getData()
    {
        return m_pdata_;
    }
};

template<typename T>
class SmartPointer
{
private:
    T* m_ptr_;
public:
    SmartPointer(T *ptr) : m_ptr_(ptr) {}
    void print()
    {
        std::cout << *m_ptr_ << std::endl;
    }
    T* operator->()
    {
        return m_ptr_;
    }
    T& operator*()
    {
        return *m_ptr_;
    }
    ~SmartPointer()
    {
        delete m_ptr_;
    }
};

template<typename T>
class SmartPointer<T[]>
{
private:
    T *m_ptr_;
public:
    SmartPointer(T* ptr) : m_ptr_(new T[*ptr]) {}
    void print()
    {
        std::cout << *m_ptr_ << std::endl;
    }
    T& operator[](int index)
    {
       return m_ptr_[index];
    }
    ~SmartPointer()
    {
        delete m_ptr_;
    }
};

int main(int argc, char *argv[])
{
    if (argc < 0)
    {
        std::cout << "Hello, World!" << std::endl;
    }

    int data = 8080;
    PrettyPrinter<int, 40> p { &data };
    p.print();

    SmartPointer<int[]> s1 { new int[5] };
    s1[0] += 5;
    s1.print();

    return 0;
}