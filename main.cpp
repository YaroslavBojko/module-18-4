#include <iostream>

void even_numbers (long long& n, int ans = 0, int i = 0)
{
    std::string symbol = std::to_string(n);
    if (i == symbol.size())
    {
        std::cout << ans;
        return;
    }
    else {
        int number = (int) symbol[i] - (int)'0';
        if (number % 2 == 0) ++ans;
        even_numbers(n, ans, i + 1);
    }
}

int main() {
   long long n = 9223372036854775806;
    even_numbers(n);
}
