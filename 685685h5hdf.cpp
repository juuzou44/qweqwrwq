#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "n должно быть больше 0\n";
        return 1;
    }

    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
            ++count;
    }

    int* positive = new int[count];
    int k = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
        {
            positive[k] = arr[i];
            ++k;
        }
    }

    std::cout << count << '\n';
    for (int i = 0; i < count; ++i)
        std::cout << positive[i] << ' ';
    std::cout << '\n';

    delete[] positive;
    delete[] arr;
    return 0;
}
