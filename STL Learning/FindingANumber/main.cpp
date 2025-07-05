#include <iostream>
#include <vector>

void linearSearch(std::vector<int> intArray, int value)
{
    bool found = false;
    for (int i = 0; i < intArray.size(); i++)
    {
        if (intArray[i] == value)
        {
            std::cout << "value is found at the index of " << i << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Value not found." << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {1,2,3,4,5,6};
    std::vector<int> intArray(array, array + 6);

    linearSearch(intArray, 6);
    return 0;
}