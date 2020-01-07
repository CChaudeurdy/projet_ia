#pragma once

#include "node.h"

#include <iostream>
#include <string>
#include <vector>

class Variable {
  private:
    std::vector<Node> _listeVar;
    char _caractere;

  public:
    Variable();

    void retenues();
    int estimationSommeMax(std::vector<std::string> listeMots,
                           std::string motResultat);
    void ajouteVariable(Node n);
};