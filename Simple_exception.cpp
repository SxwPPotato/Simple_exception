#include <iostream>
#include <string>
#include<Windows.h>

int function(std::string &str, int& forbidden_length) {
    if (str.length() == forbidden_length) {
        return -1;
    }
    return str.length();

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int forb_length;
    std::string str;
    std::cout << "Введите запретную длину: ";
    std::cin >> forb_length;
    std::cout << "Введите слово: ";
    std::cin >> str;

    while (function(str, forb_length) != -1) {
        std::cout << "Длина слова \"" << str << "\" равна " << function(str, forb_length) << "\n";
        std::cout << "Введите запретную длину: ";
        std::cin >> forb_length;
        std::cout << "Введите слово: ";
        std::cin >> str;
    }
    std::cout << "Вы ввели слово запретной длины! До свидания";
}