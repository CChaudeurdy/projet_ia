#pragma once

#include "noed.h"

#include <vector>

class Domain {
  public:
    Domain();
    void ajouteDomain();
    std::vector<Noed> getDomain();

  private:
    std::vector<Noed> _listeDomain;
};
