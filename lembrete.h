#ifndef LEMBRETE_H
#define LEMBRETE_H

#pragma once

#include <iostream>
#include <string>
#include "data.h"
#include "hora.h"

class Lembrete
{
private:
    std::string titulo;
    std::string texto;
    Data data;
    Hora hora;
    int id;

public:
    Lembrete();
    void addTitulo(const std::string &t);
    void addTexto(const std::string &txt);
    void addData(int d, int m, int a);
    void addHora(int h, int min);
    int getID();

private:
    int calculaID();
};

#endif // !LEMBRETE_H