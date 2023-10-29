#include <gtest/gtest.h>
#include "lembrete.h"
#include "data.h"
#include "hora.h"

//  https://google.github.io/googletest/reference/assertions.html

/*
    Testes da Classe Data
*/

TEST(DataTest, TestDataValida)
{
    Data dt, dt2;
    dt.addData(2, 3, 2023);
    dt2.addData(3, 3, 2023);
    EXPECT_TRUE(dt.valido());
}

/*
    Testes da Classe Hora
*/

TEST(HoraTest, TestHoraValida)
{
    Hora h;
    h.addHora(12, 50);
    EXPECT_TRUE(h.valido());
}

/*
    Testes da Classe Lembrete
*/