#ifndef FOOD_H
#define FOOD_H

#include <string>

using namespace std;

class Food{
    int m_kilos=0;
    int m_price=0; // pas utilisé
public:
    Food(int kilos):m_kilos(kilos){};
    void addKilos(int kilos);
    int getKilos();
    //virtual void setKilos();
};

#endif