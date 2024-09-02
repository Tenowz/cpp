#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newType) : _name(newName), _weapon(newType) {}

HumanA::~HumanA() {}

void    HumanA::attack(void) const {

    if (this->_weapon.getType() != "")
        std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
    else
        std::cout << this->_name << " doesn't have a weapon" << std::endl;
}