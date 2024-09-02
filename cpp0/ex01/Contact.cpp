#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getFisrt(void) {

    return this->_first;
}
std::string Contact::getLast(void) {

    return this->_last;
}
std::string Contact::getNick(void) {

    return this->_nick;
}
std::string Contact::getNum(void) {

    return this->_num;
}
std::string Contact::getSecret(void) {

    return this->_secret;
}

void    Contact::setFirst(std::string first) {

    this->_first = first;
}

void    Contact::setLast(std::string last) {

    this->_last = last;
}

void    Contact::setNick(std::string nick) {

    this->_nick = nick;
}

void    Contact::setNum(std::string num) {

    this->_num = num;
}

void    Contact::setSecret(std::string secret) {

    this->_secret = secret;
}