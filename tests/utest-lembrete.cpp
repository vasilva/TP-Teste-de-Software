#include <gtest/gtest.h>
#include "lembrete.h"
#include "data.h"
#include "hora.h"

//  https://google.github.io/googletest/reference/assertions.html

/*
    Testes da Classe Data
*/

// 1o dia do ano: 01 de Janeiro
TEST(DataTest, TestDataValidaInicioAno)
{
    Data dt(1, 1, 2023);
    EXPECT_TRUE(dt.valido());
}

// Último dia do ano: 31 de Dezembro
TEST(DataTest, TestDataValidaFinalAno)
{
    Data dt(31, 12, 2023);
    EXPECT_TRUE(dt.valido());
}

// Dias inválidos
TEST(DataTest, TestDiaInvalido)
{
    Data dt1(32, 1, 2023);
    Data dt2(0, 1, 2023);
    EXPECT_FALSE(dt1.valido());
    EXPECT_FALSE(dt2.valido());
}

// Meses inválidos
TEST(DataTest, TestMesInvalido)
{
    Data dt1(1, 13, 2023);
    Data dt2(1, 0, 2023);
    EXPECT_FALSE(dt1.valido());
    EXPECT_FALSE(dt2.valido());
}

// 29 de Fevereiro em ano não bissexto
TEST(DataTest, TestFevereiroNaoBissexto)
{
    Data dt(29, 2, 2023);
    EXPECT_FALSE(dt.valido());
}

// 29 de Fevereiro em ano bissexto
TEST(DataTest, TestFevereiroBissexto)
{
    Data dt(29, 2, 2024);
    EXPECT_TRUE(dt.valido());
}

// Ano múltiplo de 4 mas não é múltiplo de 100
TEST(DataTest, TestAnoBissextoMultiplo4)
{
    Data dt(1, 1, 2004);
    EXPECT_TRUE(dt.bissexto());
}

// Ano não é múltiplo de 4
TEST(DataTest, TestAnoBissextoNaoMultiplo4)
{
    Data dt(1, 2, 2023);
    EXPECT_FALSE(dt.bissexto());
}

// Ano é múltiplo de 100 mas não de 400
TEST(DataTest, TestAnoBissextoMultiplo100)
{
    Data dt(1, 1, 1900);
    EXPECT_FALSE(dt.bissexto());
}

// Ano é múltiplo de 400
TEST(DataTest, TestAnoBissextoMultiplo400)
{
    Data dt(1, 2, 2000);
    EXPECT_TRUE(dt.bissexto());
}

TEST(DataTest, TestIgualdadeDuasDatas)
{
    Data dt1(2, 2, 2023);
    Data dt2(2, 2, 2023);
    EXPECT_EQ(dt1, dt2); // dt1 == dt2
}

TEST(DataTest, TestOrdemCrescenteDia)
{
    Data dt1(1, 1, 2023);
    Data dt2(2, 1, 2023);
    EXPECT_LT(dt1, dt2); // Ordem cronológica: dt1 < dt2
}

TEST(DataTest, TestOrdemCrescenteMes)
{
    Data dt1(1, 1, 2023);
    Data dt2(28, 2, 2023);
    EXPECT_LT(dt1, dt2); // Ordem cronológica: dt1 < dt2
}

TEST(DataTest, TestOrdemCrescenteAno)
{
    Data dt1(31, 12, 2023);
    Data dt2(1, 1, 2024);
    EXPECT_LT(dt1, dt2); // Ordem cronológica: dt1 < dt2
}

/*
    Testes da Classe Hora
*/

// Hora válida
TEST(HoraTest, TestHoraValida)
{
    Hora h;
    h.addHora(12, 50);
    EXPECT_TRUE(h.valido());
}

/*
    Testes da Classe Lembrete
*/