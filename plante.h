#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
    private:


        int hydratation;
        int croissance;
        int sante;
        bool engrais;
        std::string nom;

    public:

        std::string getNomPlante();
        
        void elagage();
        void arroser();
        void engrais();
        void etatPlante();

        void setNomPlante(std::string nom);
                
        void jourSuivant();
        


        Plante();
        Plante(int croissance, int sante, int hydratation, bool engrais,std::string nom);

};
#endif