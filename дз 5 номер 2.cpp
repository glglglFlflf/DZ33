#include <iostream>
#include<limits.h> //библиотека для диапазона чисел типа int, char
using namespace std;

template<class T> //инициализация шаблонного класса
class info {
public:
    T x; //инициализация переменных
    T y;
    info(int x, int y) : x(x), y(y) {}
    void d() { //диапазон возможных значений
        cout << "Write x: " << endl; 
        cin >> x; //ввод значения для х
        cout << "Write y: " << endl;
        cin >> y; //ввод значения для у
        cout << "The range of possible values of the variable type: " << endl; 
           cout << "Minimum value: " << INT_MIN << " " << "Maximum value : " << INT_MAX << endl; //Диапазон возможных значений типа переменной
           cout << "Variable sizec x: " << sizeof(x) << endl; //размер переменной в байтах типа int
           cout << "Variable sizec y: " << sizeof(y) << endl; //размер переменной в байтах типа int
    }
};

int main()
{
    info<int> point(0, 0); 
    point.d(); //вызов функции
}