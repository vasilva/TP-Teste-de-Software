#include "data.h"

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 2000;
}

Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}

void Data::addData(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}

void Data::addDia(int d) { dia = d; }
void Data::addMes(int m) { mes = m; }
void Data::addAno(int a) { ano = a; }

int Data::getDia() { return dia; }
int Data::getMes() { return mes; }
int Data::getAno() { return ano; }

bool Data::bissexto()
{
    if (ano % 400 == 0)
        return true;

    if (ano % 100 == 0)
        return false;

    return (ano % 4 == 0);
}

bool Data::valido()
{
    if (ano < 1)
        return false;

    if (dia < 1 || dia > DIA_MAX)
        return false;

    if (mes < 1 || mes > MES_MAX)
        return false;

    switch (mes)
    {
    // Meses de 30 dias
    case 4:  // Abril
    case 6:  // Junho
    case 9:  // Setembro
    case 11: // Novembro
        return dia <= DIA_MAX - 1;

    // Fevereiro
    case 2:
        return bissexto() ? (dia <= 29) : (dia <= 28);
    
    // Meses de 31 dias
    default:
        return true;
    }
}

bool Data::operator==(const Data &other) const
{
    return (dia == other.dia) && (mes == other.mes) && (ano == other.ano);
}

bool Data::operator<(const Data &other) const
{
    if (ano < other.ano)
        return true;
    if (ano > other.ano)
        return false;

    if (mes < other.mes)
        return true;
    if (mes > other.mes)
        return false;

    if (dia < other.dia)
        return true;
    if (dia > other.dia)
        return false;

    return false;
}

std::ostream &operator<<(std::ostream &os, const Data &dt)
{
    os << dt.dia << "/" << dt.mes << "/" << dt.ano;
    return os;
}