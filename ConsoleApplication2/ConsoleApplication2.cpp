#include <iostream>

    

struct worker
{
    std::string surname;
    int exp;
    int zp;
    int zpp;
    int per_centzp;
    bool whour;

    void in()
    {
        std::cout << "Фамилия\t";// << surname;
        std::cin >> surname;
        std::cout << "Опыт работы\t";// << exp;
        std::cin >> exp;
        std::cout << "З/п в час\t";// << zp;
        std::cin >> zp;
        std::cout << "Кол-во часов работы\t";// << whour;
        std::cin >> whour;
    }
    

    void prime()
    {

        zpp = zp * whour;

        if(exp < 1)
        {
            per_centzp = 0;
            zp += per_centzp;
        }

        else if(exp <= 3)
        {
            per_centzp = (zp * 5) / 100 ;
            zp += per_centzp;
        }

        else if (exp < 5)
        {
            per_centzp = (zp * 8) / 100;
            zp += per_centzp;
        }

        else if (exp > 5)
        {
            per_centzp = (zp * 15) / 100;
            zp += per_centzp;
        }
    }

    void out()
    {
        std::cout << surname << "\n\t";
        std::cout << whour << "Почасовка\n\t";
        std::cout << zp << "Ваша зарплата без премии\n\t";
        std::cout << zpp << "Зарплата c премии\n\t";
        std::cout << per_centzp << "Премия\n\t";

    }
};



int main()
{
    setlocale(LC_ALL, "rus");

    worker a;
    a.in();
    a.out();
}
