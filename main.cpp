#include <iostream>

// Числа Фибоначчи - это элементы числовой последовательности
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
// Задача: вывести первые 5 чисел последовательности

int main()
{
    // объявляем 5 переменных
    double f1 = 0.0;
    double f2 = 1.0; // Второе число Фибоначчи равно 1
    double f3 = f1 + f2; // Далее сумма первого и второго числа
    double f4 = f2 + f3; // Потом сумма второго и третьего числа
    double f5 = f3 + f4; // Пятое число является суммой четвертого и третьего

    // вывод полученных чисел в консоль
    std::cout<<"Fibonacci number 1: "<<f1<<std::endl;
    std::cout<<"Fibonacci number 2: "<<f2<<std::endl;
    std::cout<<"Fibonacci number 3: "<<f3<<std::endl;
    std::cout<<"Fibonacci number 4: "<<f4<<std::endl;
    std::cout<<"Fibonacci number 5: "<<f5<<std::endl;
}