#include "volkswagen.hpp"
#include <stdexcept>

int main()
{
    throw std::runtime_error{"This should fail!"};
}
