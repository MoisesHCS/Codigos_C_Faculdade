/*
Vocês foram contratados para desenvolver um pequeno sistema em C para gerenciar seus
investimentos – compra, venda e lucro de ativos. Um ativo pode ser representado por: Código;
Valor de compra; Valor de venda; Lucro (definido por: venda - compra). Para seu conhecimento,
ativo é tudo aquilo que pode ser convertido em valor ($), como: ações, imóveis, títulos (ex.: CDBs)
etc.
O sistema deve permitir que o usuário gerencie os ativos através de: cadastro de um ativo,
listagem dos ativos, busca de um ativo por código, atualização de um ativo e exclusão de um ativo.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    double valorCompra;
    double valorVenda;
    double lucro;
}Ativo;

int total = 0;

int setOpcao(){
    int opcao;
    printf("\nseja bem vindo ao gestor de ativos");
    printf("\n[1]cadastrar novo ativo\n[2]listar ativos\n[3]buscar ativos\n[4]atualizar ativo\n[5]excluir ativos\n[0]sair\n\n");
    printf("opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

int cadastrarAtivo(Ativo ativos[], int total, int codigo){
    char continuar = 'n';
    do{
        printf("cadastrar novo ativo: \n\n");
        for(int i = total; i < 10; i++){
            ativos[i].codigo = i + 1;
            printf("digite o Valor de Compra: ");
            scanf("%lf", &ativos[i].valorCompra);
            printf("digite o Valor de Venda: ");
            scanf("%lf", &ativos[i].valorVenda);
            ativos[i].lucro = ativos[i].valorVenda - ativos[i].valorCompra;
            total++;
            printf("\ndegeja cadastrar novo produto? Sim [s] Nao [n]");
            scanf(" %c", &continuar);
            if(continuar == 'n'){
                break;
            }
        }
    }while(continuar != 'n');
    return total;
}

void listarAtivos(Ativo ativos[], int total){
    for(int i = 0; i < total; i++){
        printf("\nATIVO %d: ", ativos[i].codigo);
        printf("\n");
        printf("\no codigo do ativo eh: %d", ativos[i].codigo);
        printf("\no valor da Compra eh: %.2lf", ativos[i].valorCompra);
        printf("\no valor da venda eh: %.2lf",  ativos[i].valorVenda);
        printf("\no valor do lucro  eh: %.2lf", ativos[i].lucro);
        printf("\n");
    }
}

int buscarAtivo(Ativo ativos[], int total){
    int codigo = 0;
    printf("printf digite o codigo do ativo: ");
    scanf("%d", &codigo);

    for(int i = 0; i < total; i++){
        if(ativos[i].codigo == codigo){
            printf("\no codigo do ativo eh: %.2d", ativos[i].codigo);
            printf("\no valor da venda eh: %.2lf",  ativos[i].valorVenda);
            printf("\no valor da Compra eh: %.2lf", ativos[i].valorCompra);
            printf("\no valor do lucro  eh: %.2lf", ativos[i].lucro);
            printf("\n");
            break;
        }
    }
}

int atualizarAtivo(Ativo ativos[], int total){
    int codigo;
    printf("digite o codigo do ativo: ");
    scanf("%d", &codigo);

    for(int i = 0; i < total; i++){
        if(ativos[i].codigo == codigo){
            printf("digite o Valor de Compra: ");
            scanf("%lf", &ativos[i].valorCompra);
            printf("digite o Valor de Venda: ");
            scanf("%lf", &ativos[i].valorVenda);
            ativos[i].lucro = ativos[i].valorVenda - ativos[i].valorCompra;
        }
    }
}

int excluirAtivo(Ativo ativos[]){
    int excluir;
    printf("Informe o codigo do ATIVO a ser excluido\n");
    scanf("%d", &excluir);

    for (int i = 0; i < total; i++){
        if (ativos[i].codigo == excluir){
            for (int j = i; j < total - 1; j++){
                ativos[j] = ativos[j+1];
            }
            total--;
            printf("Ativo excluido com sucesso.\n");
        }
    }
}

int main(){
    int opcao = setOpcao(), codigo= 0;
    Ativo ativos[10];

    do{
        if(opcao == 1){
            total = cadastrarAtivo(ativos, total, codigo);
            opcao = setOpcao();
        }else if(opcao == 2){
            listarAtivos(ativos, total);
            opcao = setOpcao();
        }else if(opcao == 3){
            buscarAtivo(ativos, total);
            opcao = setOpcao();
        }else if(opcao == 4){
            atualizarAtivo(ativos, total);
            opcao = setOpcao();
        }else if(opcao == 5){
            excluirAtivo(ativos);
            opcao = setOpcao();
        }else{
            printf("opcao invalida digite uma opcao correta: ");
            opcao = setOpcao();
        }
    }while(opcao != 0);
}
