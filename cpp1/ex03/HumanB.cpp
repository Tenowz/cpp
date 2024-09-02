#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : _name(newName) {

    this->_weapon = NULL;
}

HumanB::~HumanB() {}

void    HumanB::attack(void) const {

    if (this->_weapon && this->_weapon->getType() != "")
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " doesn't have a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon) {

	this->_weapon = &newWeapon;
}