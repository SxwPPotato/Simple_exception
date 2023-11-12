#include <iostream>
#include <string>
#include<Windows.h>

int function(std::string &str, int& forbidden_length) {
    if (str.length() == forbidden_length) {
        throw std::invalid_argument("forbidden length");
    }
    return str.length();

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int forb_length;
    std::string str;
    int er = 0;
    std::cout << "Введите запретную длину: ";
    std::cin >> forb_length;
    std::cout << "Введите слово: ";
    std::cin >> str;
    while(er != 1) { try {

        std::cout << "Длина слова \"" << str << "\" равна " << function(str, forb_length) << "\n";
        std::cout << "Введите запретную длину: ";
        std::cin >> forb_length;
        std::cout << "Введите слово: ";
        std::cin >> str;

    }
    catch (std::invalid_argument& e) {
        std::cout << "Вы ввели слово запретной длины! До свидания";
        er = 1;
    }
    }
}