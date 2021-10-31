#include <iostream>
#include <string>

#include "boost/optional.hpp"

boost::optional<int> convert(const std::string& text)
{
    if (text == "1") {
        return 1;
    }
    else {
        return boost::none;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    const std::string s1{"1"};
    auto value1 = convert(s1);
    if (value1) {
        std::cout << "s1 value is " << value1.get() << std::endl;
    }
    else {
        std::cout << "can't convert s1" << std::endl;
    }

    const std::string s2{"2"};
    auto value2 = convert(s2);
    if (value2) {
        std::cout << "s2 value is " << value2.get() << std::endl;
    }
    else {
        std::cout << "can't convert s2" << std::endl;
    }

    return 0;
}
