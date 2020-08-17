#include <iostream>

#include <array>
#include <vector>

int main()
{
    std::cout<<"Hello World \n";

    std::array<std::string, 2> a3 = { std::string("a"), "b" };
    
    for(const auto& s: a3)
        std::cout << s << ' ';

    return 0;

}