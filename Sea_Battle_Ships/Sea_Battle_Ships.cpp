// Sea_Battle_Ships.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
void setup_ship(int map[10][10], int x, int y, int direction, int deck);
void setup_onedeck_ship(int map[10][10]);//Размещение однопалубных кораблей
void draw_onedeck_ship(int map[10][10]); //Отрисовка  однопалубных кораблей

int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    const int N = 10;
    int my_map[N][N] = {0};
    int comp_map[N][N] = {0};
    int dir;
    int x, y;


    for (int deck = 1; deck < 5; deck++) {

        cout << "Введите координаты  " << deck << "  Палубного корабля" << endl;;
        cout << "Горизонтально - 0 Вертикально - 1 ?";
        cin >> dir;
        cout << "Горизонталь: ";
        cin >> x;
        cout << "Вертикаль: ";
        cin >> y;

        setup_ship(my_map, x, y, dir, deck);

    }

   

    draw_onedeck_ship(my_map);



    
}
void setup_ship(int map[10][10], int x, int y, int direction, int deck) {

    if (direction == 1) {
        for (int i = 0; i < deck; i++) {
            map[x+i][y] = 1;
        }
    }

    if (direction == 0) {
        for (int i = 0; i < deck; i++) {
            map[x][y+i] = 1;
        }
    }


}

void setup_onedeck_ship(int map[10][10]) {
    srand(time(0));
    int x, y;
    for (int i = 0; i < 4; i++)
    {
        x = rand() % 10;
        y = rand() % 10;
        map[x][y] = 1;
    }

}

void draw_onedeck_ship(int map[10][10]) {
 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << map[i][j]<< " ";
        }
        cout << endl;
    }
    

}
