#include <iostream>
#include <Windows.h>
#include <string>

class Figure {
protected:
    int sides_count;
    std::string name;
public:
    int get_sides() { return sides_count; }
    std::string get_name() { return this->name; }
    void Set_Sides(int sides) {
        this->sides_count = sides;
    }
    Figure(std::string name, int sides) {
        this->sides_count = sides;
        this->name = name;
    }
    Figure() {
        this->sides_count = 0;
        this->name = "Фигура";
    };
};

class Triangle : public Figure {
public:
    Triangle() {
        this->sides_count = 3;
        this->name = "Треугольник";
    };
};

class Quadrangle : public Figure {
public:
    Quadrangle() {
        this->sides_count = 4;
        this->name = "Четырёхугольник";
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.get_name() << ": " << figure.get_sides() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides() << std::endl;
    system("pause");
}