#include <iostream>

int main()
{
    const int loop_count = 15;  // A const integer, no need for constexpr here
    for (int i = 0; i < loop_count; ++i)
    {
        std::cout << "Hallo Welt\n";
    }

    if (1) {
        std::cout << "experiment";
    }
}
