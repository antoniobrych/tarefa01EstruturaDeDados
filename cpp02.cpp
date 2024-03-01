#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main(void){
    unsigned int ui_year = 2024;

    //cond1 -> divisivel por 4 e nao por 100
    //cond2 -> divisivel por 400
    bool b_logicExpression_cond1 = ((ui_year%4==0)&!(ui_year%100==0));
    bool b_logicExpression_cond2 = ((ui_year%400==0));
    //faz se um OR para avaliar se algumas dessas condicoes sao cumpridas.
    string yearTest = (b_logicExpression_cond1||b_logicExpression_cond2) ? "Teste do Ano Bissexto : VERDADEIRO" : "Teste do Ano Bissexto : FALSO.";
    std::cout << "Ano : " << ui_year <<"\n";
    std::cout << yearTest;




}


