#include <iostream>
#include <iterator>

#define BUFF 512

class Stack
{
public:
    Stack() = default;
    ~Stack() = default;

    void push(int elm);
    void pop();
    int top() const;
    bool isEmpty();

private:
    int m_buffer[BUFF];
    int m_top{ -1 };
};

void Stack::push(int elm)
{
    m_buffer[m_top++] = elm;
}

void Stack::pop()
{
    m_top--;
}

int Stack::top() const
{
    return m_buffer[m_top];
}

bool Stack::isEmpty()
{
    return m_top == -1;
}

template <typename T, int size>
class Stack2
{
public:
    Stack2() =  default;
    Stack2(const Stack2<T,size> &other)
    {
        m_top = other.m_top;
        for (int i = 0; i < m_top; i++)
            m_buffer[i] = other.m_buffer[i];
    }
    ~Stack2() =  default;

    void push(const T &elm);
    void pop();
    const T &top() const;
    bool isEmpty();

    static Stack2 Create();

private:
    T m_buffer[size];
    int m_top{ -1 };
};

template <typename T, int size>
Stack2<T, size> Stack2<T, size>::Create()
{
    return Stack2<T, size>();
}

template<typename T, int size>
void Stack2<T, size>::push(const T &elm)
{
    m_buffer[m_top++] = elm;
}

template<typename T, int size>
const T &Stack2<T, size>::top() const
{
    return m_buffer[m_top];
}

template<typename T, int size>
void Stack2<T, size>::pop()
{
    --m_top;
}

template<typename T, int size>
bool Stack2<T, size>::isEmpty()
{
    return m_top == -1;
}

int main(int argc, char const *argv[])
{
    if (argc < 0)
    {
        std::cout << "Hello, World!" << std::endl;
    }

    Stack s;

    s.push(1);
    s.push(2);
    s.push(5);
    s.push(3);

    while (!s.isEmpty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << std::endl;

    Stack2<int, 5> s2 = Stack2<int, 5>::Create();
    s2.push(1);
    s2.push(2);
    s2.push(5);

    while (!s2.isEmpty())
    {
        std::cout << s2.top() << std::endl;
        s2.pop();
    }

    return 0;
}