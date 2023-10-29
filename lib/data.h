#ifndef DATA_H
#define DATA_H

#pragma once

#include <iostream>

#define DIA_MAX 31
#define MES_MAX 12

class Data
{
private:
    // Campos
    int dia, mes, ano;

public:
    // Construtores
    Data();
    Data(int d, int m, int a);
    
    // Modificadores de campos
    void addData(int d, int m, int a);
    void addDia(int d);
    void addMes(int m);
    void addAno(int a);

    // Getters
    int getDia();
    int getMes();
    int getAno();

    // Testes de validade
    bool bissexto();
    bool valido();

    // Métodos auxiliares
    friend std::ostream &operator<<(std::ostream &os, const Data &dt);
    bool operator==(const Data &other) const;
    bool operator<(const Data &other) const;
};

#endif // !DATA_H