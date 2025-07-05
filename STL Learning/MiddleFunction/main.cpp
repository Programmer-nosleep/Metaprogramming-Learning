#include <climits>
#include <cstring>
#include <cstdlib>

#include <iostream>
#include <vector>
#include <algorithm>

class Main
{
public:
    Main() = default;
    ~Main() = default;

    static std::vector<int> middle(std::vector<int>& array)
    {
        if (array.size() <= 2)
        {
            return {};
        }

    /*
        int *result = new int[array.size() - 2];

        for (int i = 0; i < array.size() - 1; i++)
            result[i - 1] = array[i];
    */
        return std::vector<int>(array.begin(), array.end() - 1);
    }

    static int sumDiagonal(const std::vector<std::vector<int>>& array)
    {
        int sum = 0;
        int numRow = array.size();
        for (int i = 0; i < numRow; i++)
            sum += array[i][i];
        return sum;
    }

    static std::vector<int> findTopTwoScores(const std::vector<int>& array)
    {
        int firstHighest = INT_MIN;
        int secondHighest = INT_MIN;

        /*for (auto it = array.begin(); it != array.end(); it++)
        {
            if (*it > firstHighest)
            {
                secondHighest = firstHighest;
                firstHighest = *it;
            } else if (*it > secondHighest && *it < firstHighest)
            {
                secondHighest = *it;
            }

            // int *result = new int[2]{firstHighest, secondHighest};
            return {firstHighest, secondHighest};
        }*/

        for (auto& score : array)
        {
            if (score > firstHighest)
            {
                secondHighest = firstHighest;
                firstHighest = score;
            } else if (score > secondHighest && score < firstHighest)
            {
                secondHighest = score;
            }
        }

        return {firstHighest, secondHighest};
    }

    static int findMissingNumberInArray(std::vector<int> array)
    {
        int n = array.size() + 1;
        int expectedSum = (n * (n + 1)) / 2;
        int actualSum = 0;

        for (auto it = array.begin(); it != array.end(); it++)
            actualSum += *it;

        return expectedSum - actualSum;
    }

    static std::vector<int> removeDuplicates(const std::vector<int>& array)
    {
        /*
        int n = array.size();
        int* unique = new int[n];
        int index = 0;
        */

        std::vector<int> result;

        /*
        for (int i = 0; i < n; i++)
        {
            bool isDuplicate = false;

            for (int j = i + 1; j < n; j++)
            {
                if (array[i] == array[j])
                {
                    isDuplicate = true;
                    break;
                }
            }
        }*/

        for (auto val : array)
        {
            if (std::find(result.begin(), result.end(), val) == result.end())
            {
                result.push_back(val);
            }
        }

        // return std::memcpy(unique, array.data(), sizeof(int) * n);
        // uniqueSize = index;

        return result;
    }
};

int main(int argc, char const *argv[])
{
    if (argc < 0)
    {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }


    std::vector<int> myArray = {1,2,3,4};
    std::vector<int> result = Main::middle(myArray);

    for (auto& val : result)
    {
        std::cout << val << std::endl;
    }

    std::cout << std::endl;

    std::vector<std::vector<int>> myArray2 = {
    {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    std::cout << "sum of array : " << Main::sumDiagonal(myArray2) << std::endl;

    std::vector<int> myArray3 = {84, 85, 86, 87, 85, 90, 85, 83, 23, 45, 84, 1, 2, 0};
    std::vector<int> topTwo = Main::findTopTwoScores(myArray3);

    std::cout << "Top 1 : " << topTwo[0] << std::endl << "Top 2 : " << topTwo[1] << std::endl << std::endl;

    std::vector<int> missingNumber = {1,2,3,4};
    std::cout << "Missing number : " << Main::findMissingNumberInArray(missingNumber) << std::endl;

    std::vector<int> arrayWithDuplicateNumber = {1,2,2,3,3,3,4,4,4,4,5,5,5,5};
    std::vector<int> withoutDuplicates = Main::removeDuplicates(arrayWithDuplicateNumber);

    std::cout << "Without Duplicates : ";

    for (auto& val : withoutDuplicates)
    {
        std::cout << val << std::endl;
    }

    return 0;
}