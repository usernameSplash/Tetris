#include <iostream>
#include "GameObject.hpp"

GameObject::GameObject()
{
    x = 10;
}

void GameObject::ASDF()
{
    std::cout << GameObject::x << std::endl;
}