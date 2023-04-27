#include "classes.h"

int main(){
    std::string resposta;

    Estudante *estudante=new Estudante();
    Trabalhador *trabalhador=new Trabalhador();
    Graduado *graduado=new Graduado();

    std::cout<<"Deseja adicionar: Estudante/Trabalhador/Graduado?"<<std::endl;
    std::cin>>resposta;
    if(resposta=="Estudante" or "estudante"){
        estudante->preencherPessoa();
        estudante->preencherEstudante();
        estudante->impEstudante();
        std::cout<<"Estudante adicionado ao arquivo."<<std::endl;
    }else if(resposta=="Trabalhador" or "trabalhador"){
        trabalhador->imp();
        trabalhador->impTrabalhador();
    }else if(resposta=="Graduado" or "graduado"){
        graduado->imp();
        graduado->impGraduado();
    }else{
        std::cout<<"Integrante não reconhecido."<<std::endl;
        return 0;
    }
    return 0;
}