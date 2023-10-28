#include "hora.h"

Hora::Hora()
{
    hora = 0;
    minuto = 0;
}

void Hora::addHora(int h, int min)
{
    hora = h;
    minuto = min;
}

bool Hora::valido()
{
    return (hora >= 0 && hora < 24) && (minuto >= 0 && minuto < 60);
}

bool Hora::operator==(const Hora &other) const
{
    return (hora == other.hora) && (minuto == other.minuto);
}

bool Hora::operator<(const Hora &other) const
{
    if (hora < other.hora)
        return true;
    if (hora > other.hora)
        return false;

    return (minuto < other.minuto);
}

std::ostream &operator<<(std::ostream &os, const Hora &h)
{
    os << h.hora << ":" << h.minuto;
    return os;
}