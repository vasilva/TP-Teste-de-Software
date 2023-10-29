#ifndef DATA_H
#define DATA_H

#pragma once

#include <iostream>

class Data
{
private:
    int dia, mes, ano;

public:
    Data();
    void addData(int d, int m, int a);
    void addDia(int d);
    void addMes(int m);
    void addAno(int a);
    bool bissexto();
    bool valido();
    friend std::ostream &operator<<(std::ostream &os, const Data &dt);
    bool operator==(const Data &other) const;
    bool operator<(const Data &other) const;
};

#endif // !DATA_H