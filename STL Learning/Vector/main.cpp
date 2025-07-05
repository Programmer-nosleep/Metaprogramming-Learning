#include <iostream>
#include <array>
#include <vector>
#include <iterator>

int main(int argc, const char * argv[])
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    numbers.push_back(11);
    numbers.push_back(12);

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
        std::cout << *it << std::endl;

    std::array<int, 10> numbers2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    numbers2.at(2) += 11;
    for (auto it2 = numbers2.begin(); it2 != numbers2.end(); ++it2)
        std::cout << *it2 << std::endl;

    return 0;
}