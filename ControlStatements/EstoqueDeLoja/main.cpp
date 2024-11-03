#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Produto {
    int codigo;
    string nome;
    int quantidade;
    double precoUnitario;
};

// Função para adicionar um produto ao estoque
void adicionarProduto(vector<Produto>& estoque){
    Produto novoProduto;
    
    cout << "Digite o código do produto: " << endl;
    cin >> novoProduto.codigo;
    cin.ignore();

    cout << "Digite o nome do produto: " << endl;
    getline(cin, novoProduto.nome);

    cout << "Digite a quantidade do produto: " << endl;
    cin >> novoProduto.quantidade;

    cout << "Digite o preço do produto: " << endl;
    cin >> novoProduto.precoUnitario;

    estoque.push_back(novoProduto);

    cout << "Produto adicionado com sucesso" << endl;

}

// Função para listar todo os produtos e calcular o valor total no estoque

void listarProdutos(const vector<Produto>& estoque){
    double valorTotal = 0;

    cout << "\nLista de Produtos no estoque:\n";
    for(const auto& produto : estoque){
        cout << "Código: " << produto.codigo
            << ", Nome: " << produto.nome
            << ", Quantidade: " << produto.quantidade
            << ", Preço Unitário: " << produto.precoUnitario << endl;

        valorTotal += produto.quantidade * produto.precoUnitario;
    }

    cout << "Valor total do estoque: " << valorTotal << endl;
}

void atualizarQuantidade(vector<Produto>& estoque){
    int codigo;
    int novaQuantidade;
    
    cout <<"Digite o codigo do Produto que deseja atualizar";
    cin >> codigo;

    for (auto& produto : estoque){
        if(produto.codigo == codigo){
            cout << "Digite a nova quantidade para " << produto.nome << ": ";
            cin >> novaQuantidade;
            produto.quantidade = novaQuantidade;
            cout << "Quantidade atualizada com sucesso" << endl;
            return;
        }
    }

        cout << "Produto com código " << codigo << " não encontrado." << endl;
}


int main()
{

    vector<Produto> estoque;
    int opcao;

    do {
        cout << "\n--- Gerenciador de Estoque ---\n";
        cout << "1. Adicionar novo produto\n";
        cout << "2. Listar todos os produtos\n";
        cout << "3. Atualizar quantidade de produtos\n";
        cout << "4. Sair\n";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            adicionarProduto(estoque);
            break;
        case 2:
            listarProdutos(estoque);
            break;
        case 3:
            atualizarQuantidade(estoque);
            break;
        case 4:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Operação inválida. Tente novamente." << endl;
        }
        
    } while (opcao != 4);

    return 0;
}