#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include "plante.h"
#include <string>


int Plante::hydratation(){
    return hydratation;
}

int Plante::croissance(){
    return croissance;
}

int Plante::sante(){
    return sante;
}

bool Plante::engrais(){
    return engrais;
}

std::string Plante::getNomPlante(){
    return nom;
}

void Plante::elagage(){
    sante++;
    std::cout << "Vous avez élagué" << nom << std::endl;
};

void Plante::arroser(){
    hydratation++;
    std::cout << "Vous avez arrosé " << nom << std::endl;
};

void Plante::engrais(){
    engrais=true;
    std::cout << "Vous avez mis de l'engrais sur la " << nom << std::endl;
};

void Plante::etatPlante(){
     std::cout<<Plante::hydratation()<<" hydratation : "<<Plante::croissance()<<" croissance : "<<Plante::sante()<<" sante : "<<Plante::getNomPlante()<<std::endl;
};

void Plante::setNomPlante(std::string nom){
    nom=nom;
};

void Plant::JourSuivant(){

    if(hydratation <= 0){
        sante -= 1;
        std::cout << nom << " Vous n'avez pas assez arrosé votre plante" << std::endl;
    }
    else if(hydratation >= 8){
        sante -= 1;
        std::cout << nom << " Vous avez trop arrosé votre plante" << std::endl;
    }    

    if(engrais == true){
        engrais += sante*2;
        if(sante < 6){
            sante += 1;
        }
    }
    
    engrais = false;
    hydratation -= 2;
}

Plante::Plante() : sante(10), hydratation(6), engrais(false), croissance(1), nom("Violette") {}
Plante::Plante(int sante, int hydratation, bool engrais,int croissance, std::string nom) : sante(sante), hydratation(hydratation), engrais(engrais),croissance(croissance), nom(nom){}

#endif