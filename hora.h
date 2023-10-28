#ifndef HORA_H
#define HORA_H

#pragma once

#include <iostream>

class Hora
{
private:
    int hora, minuto;

public:
    Hora();

    void addHora(int hora, int min);
    bool valido();

    friend std::ostream &operator<<(std::ostream &os, const Hora &dt);
    bool operator==(const Hora &other) const;
    bool operator<(const Hora &other) const;
};

#endif // !HORA_H