#include <iostream>
#include "Player.h"
    
bool IsHitting()
{
    std::cout << Player.m_Name << ", do you want a hit? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

void Win()
{
    std::cout << Player.m_Name <<  " wins.\n";
}

void Lose()
{
    std::cout << Player.m_Name <<  " loses.\n";
}

void Push()
{
    std::cout << Player.m_Name <<  " pushes.\n";
}