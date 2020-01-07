#pragma once
#include <vector>
#include <string>
#include <iostream> 

#include "noed.hh"

class Variable
{
private:
   std::vector<Noed> _listeVar;

    char _caractere;
public:
    Variable();


    void retenues();
    int estimationSommeMax(std::vector<std::string> listeMots, std::string motResultat);
    void ajouteVariable(Noed n);

};


