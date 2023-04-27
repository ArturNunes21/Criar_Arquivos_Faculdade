#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>
#include <fstream>


class Pessoa{
private:
  std::string nome;
  std::string endereco;
  std::string telefone;
  std::string email;
public:
  void preencherPessoa();
  void imp();
  void setNome(std::string);
  std::string getNome();
  void setEndereco(std::string);
  std::string getEndereco();
  void setTelefone(std::string);
  std::string getTelefone();
  void setEmail(std::string);
  std::string getEmail();
};

void Pessoa::preencherPessoa(){
    std::string nome, endereco, telefone, email;
    std::cout<<"Nome = ";
    std::cin>>nome;
    setNome(nome);
    std::cout<<"Endereco = ";
    std::cin>>endereco;
    setEndereco(endereco);
    std::cout<<"Telefone = ";
    std::cin>>telefone;
    setTelefone(telefone);
    std::cout<<"Email = ";
    std::cin>>email;
    setEmail(email);
}

void Pessoa::imp(){
    std::cout<<"\nNome = "<<getNome()<<std::endl;
    std::cout<<"Endereco = "<<getEndereco()<<std::endl;
    std::cout<<"Telefone = "<<getTelefone()<<std::endl;
    std::cout<<"Email = "<<getEmail()<<std::endl;
}

void Pessoa::setNome(std::string novoNome){
  nome=novoNome;
}

std::string Pessoa::getNome(){
  return nome;
}

void Pessoa::setEndereco(std::string novoEndereco){
  endereco=novoEndereco;
}

std::string Pessoa::getEndereco(){
  return endereco;
}

void Pessoa::setTelefone(std::string novoTelefone){
  telefone=novoTelefone;
}

std::string Pessoa::getTelefone(){
  return telefone;
}

void Pessoa::setEmail(std::string novoEmail){
  email=novoEmail;
}

std::string Pessoa::getEmail(){
  return email;
}

class Estudante:public Pessoa{
private:
  
  std::string matricula;
  std::string curso;
  std::string campus;
public: 
  Estudante();
  void impEstudante();
  void preencherEstudante();
  void setMatricula(std::string);
  std::string getMatricula();
  void setCurso(std::string);
  std::string getCurso();
  void setCampus(std::string);
  std::string getCampus();
};

Estudante::Estudante(){
    setNome("");
    setEndereco("");
    setTelefone("");
    setEmail("");
    setMatricula("");
    setCurso("");
    setCampus("");
}

void Estudante::preencherEstudante(){
    std::string matricula, curso, campus;
    std::cout<<"Matricula = ";
    std::cin>>matricula;
    setMatricula(matricula);
    std::cout<<"Curso = ";
    std::cin>>curso;
    setCurso(curso);
    std::cout<<"Campus = ";
    std::cin>>campus;
    setCampus(campus);
}

void Estudante::impEstudante(){
    std::ofstream arqEstudantes;
    arqEstudantes.open("estudantes.txt", std::ios::app);  //posiciona o cursor no final do arquivo
    arqEstudantes<<"\nNome = "<<getNome()<<std::endl;
    arqEstudantes<<"Endereco = "<<getEndereco()<<std::endl;
    arqEstudantes<<"Telefone = "<<getTelefone()<<std::endl;
    arqEstudantes<<"Email = "<<getEmail()<<std::endl;
    arqEstudantes<<"Matricula = "<<getMatricula()<<std::endl;
    arqEstudantes<<"Curso = "<<getCurso()<<std::endl;
    arqEstudantes<<"Campus = "<<getCampus()<<std::endl;
    arqEstudantes<<"==========================";
    arqEstudantes.close();
}

void Estudante::setMatricula(std::string novaMatricula){
    matricula=novaMatricula;
}

std::string Estudante::getMatricula(){
    return matricula;
}

void Estudante::setCurso(std::string novoCurso){
    curso=novoCurso;
}

std::string Estudante::getCurso(){
    return curso;
}

void Estudante::setCampus(std::string novoCampus){
    campus=novoCampus;
}

std::string Estudante::getCampus(){
    return campus;
}

class Trabalhador:public Pessoa{
private:
  std::string funcao;
  std::string departamento;
  std::string salario;
public: 
  Trabalhador();
  void impTrabalhador();
  void setFuncao(std::string);
  std::string getFuncao();
  void setDepartamento(std::string);
  std::string getDepartamento();
  void setSalario(std::string);
  std::string getSalario();
};

Trabalhador::Trabalhador(){
    setNome("");
    setEndereco("");
    setTelefone("");
    setEmail("");
    setFuncao("");
    setDepartamento("");
    setSalario("");
}

void Trabalhador::impTrabalhador(){
    std::cout<<"Funcao = "<<getFuncao()<<std::endl;
    std::cout<<"Departamento = "<<getDepartamento()<<std::endl;
    std::cout<<"Salario = R$"<<getSalario()<<std::endl;
    std::cout<<"\n==========================\n";
}

void Trabalhador::setFuncao(std::string novaFuncao){
    funcao=novaFuncao;
}

std::string Trabalhador::getFuncao(){
    return funcao;
}

void Trabalhador::setDepartamento(std::string novoDepartamento){
    departamento=novoDepartamento;
}

std::string Trabalhador::getDepartamento(){
    return departamento;
}

void Trabalhador::setSalario(std::string novoSalario){
    salario=novoSalario;
}

std::string Trabalhador::getSalario(){
    return salario;
}

class Graduado:public Estudante{
private:
    std::string anoConclusao;
    std::string anoColacao;
    std::string numeroDiploma;
public:
    Graduado(){
        setNome("S");
        setEndereco("");
        setTelefone("");
        setEmail("");
        setAnoConclusao("");
        setAnoColacao("");
        setNumeroDiploma("");
    }

    void impGraduado(){
        std::cout<<"Ano da conclusao = "<<getAnoConclusao()<<std::endl;
        std::cout<<"Ano da colacao = "<<getAnoColacao()<<std::endl;
        std::cout<<"Numero do diploma = "<<getNumeroDiploma()<<std::endl;
        std::cout<<"\n==========================\n";
    }

    void setAnoConclusao(std::string novoAnoConclusao){
        anoConclusao=novoAnoConclusao;
    }
    
    std::string getAnoConclusao(){
        return anoConclusao;
    }

    void setAnoColacao(std::string novoAnoColacao){
        anoColacao=novoAnoColacao;
    }

    std::string getAnoColacao(){
        return anoColacao;
    }

    void setNumeroDiploma(std::string novoNumeroDiploma){
        numeroDiploma=novoNumeroDiploma;
    }

    std::string getNumeroDiploma(){
        return numeroDiploma;
    }
};

#endif