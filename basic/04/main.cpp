#include <iostream>
#include <vector>

template<typename T>
class PrettyPrinter
{
private:
    T* m_pdata_;
public:
    PrettyPrinter(T *data);
    void print();
    T *getData();
};

template<typename T>
PrettyPrinter<T>::PrettyPrinter(T *data)
    : m_pdata_(data)
{
}

template<typename T>
void PrettyPrinter<T>::print()
{
    std::cout << *m_pdata_ << std::endl;
}

template<typename T>
T* PrettyPrinter<T>::getData()
{
    return m_pdata_;
}

template<>
class PrettyPrinter<char*> {
private:
    char* m_pdata_;
public:
    PrettyPrinter(char* data) : m_pdata_(data) {}

    void print() {
        std::cout << "String: " << m_pdata_ << std::endl;
    }

    char* getData() {
        return m_pdata_;
    }
};

template<>
class PrettyPrinter<std::vector<int>>
{
private:
    std::vector<int>* m_pdata_;
public:
    PrettyPrinter(std::vector<int>* data) : m_pdata_(data) {}

    void print()
    {
        for (const auto& i: *m_pdata_)
        {
            std::cout << i << std::endl;
        }
    }
    std::vector<int>* getData()
    {
        return m_pdata_;
    }
};

int main(int argc, char **argv)
{
    if (argc < 0)
    {
        std::cout << "Hello, World!" << std::endl;
    }

    int data = 5;
    float f = 8.2f;
    char *p {"test"};

    PrettyPrinter<int> p1(&data);
    p1.print();
    PrettyPrinter<float> p2(&f);
    p2.print();

    PrettyPrinter<char*> pcon(p);
    pcon.print();

    char *pdata = pcon.getData();

    std::vector<int> v = {1,2,3,4,5};
    PrettyPrinter<std::vector<int>> pvp(&v);
    pvp.print();

    return 0;
}