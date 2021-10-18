#include <iostream>
#include <windows.h>

bool gameOver;
const int width {20};
const int height {20};
int x,y,fruitX,fruitY,score;
enum eDirection {STOP=0,LEFT,RIGHT,UP,DOWN};
eDirection dir;


void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;

}

void Draw()
{

    system("cls"); // clear console window

    for(int i=0;i<=width;i++)
    {
        std::cout << '#';
    }
    
    std::cout << std::endl;

    for(int i = 0;i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(j==0)
            {
                std::cout << '#';
            }
            else
            {
                std::cout << " ";
            }

            if(j==width-1)
            {
                std::cout << '#';
            }  
        }
        std::cout << std::endl;
    }



    for(int i=0;i<=width;i++)
    {
        std::cout << '#';
    }
}
 
void Input()
{

}

void Logic()
{

}


int main () 
{
    Setup();
    while(!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }

}
