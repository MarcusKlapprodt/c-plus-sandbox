#include <iostream>
#include <windows.h>

void Setup()
{
}

void Draw();


void Input()
{
}

void Logic()
{
}

int main()
{

    Draw();

    return 0;
}

void Draw()
{

    for (int x = 0; x < 10; x++)
    {
        if (x == 0 || x == 9)
        {
            for (int y = 0; y < 32; y++)
            {
                std::cout << '-';
            }
        }
        else
        {
            std::cout << '|';
            for (int y = 0; y < 30; y++)
            {
                std::cout << ' ';
            }
            std::cout << '|';
        }

        std::cout << "\n";
    }
}