#include <iostream>
#include <locale>

using namespace std;

#include "Usuario.cpp"

int main(){

    setlocale(LC_ALL,"");

    string email;
    string senha;

    string nome_completo;
    string data_nascimento;
    string endereco;
    string telefone;
    string telefone_familiar;
    string documento;
    string classe_do_funcionario;
    float salario;

    float orcamento;
    string acompanhante;
    float gastos_totais;

    int opcao;

    cout << "\n                             Bem vindo ao teste da classe Usuário! :D " << endl;

    cout << "\n   Comece inserindo o seu email: ";
    cin >> email;

    cout << "   Insira sua senha: ";
    cin >> senha;

    cout << "   Insira o seu nome completo: ";
    cin.ignore();
    getline(cin,nome_completo);

    cout << "   Insira sua data de nascimento: ";
    cin >> data_nascimento;

    cout << "   Insira seu endereço: ";
    cin.ignore();
    getline(cin,endereco);

    cout << "   Insira seu telefone: ";
    cin >> telefone;

    cout << "   Insira um telefone familiar: ";
    cin >> telefone_familiar;

    cout << "   Insira o seu documento (RG, CPF ou PASSAPORTE): ";
    cin >> documento;

    cout << "   Insira a classe do funcionario (Gerente ou vendedor): ";
    cin >> classe_do_funcionario;

    cout << "   Insira o salário do funcionário em reais: R$ ";
    cin >> salario;

    cout << "   Insira o orcamento da viagem (quantia que deseja gastar): R$ ";
    cin >> orcamento;

    cout << "   Insira se terás acompanhante: ";
    cin >> acompanhante;

    cout << "   Insira os gastos totais da viagem (quantia que o senhor irá gastar): R$: ";
    cin >> gastos_totais;

    cout << "\n\nTeste para o construtor digite 1"
                  "\nTeste para os métodos sets digite 2" << endl;
    cin >> opcao;

    if (opcao == 1){

    Usuario teste (email, senha, nome_completo, data_nascimento,
                 endereco, telefone, telefone_familiar, documento, classe_do_funcionario,
                  orcamento, acompanhante, gastos_totais, salario);

    teste.testar_classe();

    }

    else if (opcao == 2){

        Usuario teste;
        teste.set_email(email);
        teste.set_senha(senha);
        teste.set_nome_completo(nome_completo);
        teste.set_data_nascimento(data_nascimento);
        teste.set_endereco(endereco);
        teste.set_telefone(telefone);
        teste.set_telefone_familiar(telefone_familiar);
        teste.set_documento(documento);
        teste.set_classe_do_funcionario(classe_do_funcionario);
        teste.set_orcamento(orcamento);
        teste.set_acompanhante(acompanhante);
        teste.set_gastos_totais(gastos_totais);
        teste.set_salario(salario);

        teste.testar_classe();
    }

    else{
        cout << "\nOpção inválida, o programa será encerrado!" << endl;
    };

    return 0;
}
