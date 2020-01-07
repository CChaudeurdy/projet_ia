#pragma once
#include <vector>
#include "noed.hh"

class Domaine
{
public:
    Domaine();
    void ajouteDomaine();
    std::vector<Noed> getDomaine();
private:
    std::vector<Noed> _listeDomaine;
};


