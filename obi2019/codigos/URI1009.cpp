// URI 1009
#include <bits/stdc++.h>
using namespace std;

string nome;
double salario_fixo;
double comissao;

int main() {
    cin >> nome;
    cin >> salario_fixo;
    cin >> comissao;

    double valor = (15.0/100)*comissao;
    // mesma coisa que (((double)15)/100)*comissao
    // mesma coisa que 0.15*comissao

    double resposta = salario_fixo+valor; 
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << resposta << endl;

    return 0;
}
