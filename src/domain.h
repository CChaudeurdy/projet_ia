#pragma once

#include "node.h"

#include <vector>

class Domain {
  public:
    Domain();
    void ajouteDomain();
    std::vector<Node> getDomain();

  private:
    std::vector<Node> _listeDomain;
};
