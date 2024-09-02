#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _target("Default") {

	this->setGrade(145);
	this->setGradeEx(137);
	std::cout << "ShrubberyCreationForm constructor called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target) {

	this->setGrade(145);
	this->setGradeEx(137);
	std::cout << "ShrubberyCreationForm constructor called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, int grade, int gradeEx) {

	this->_target = target;
	this->setGrade(grade);
	this->setGradeEx(gradeEx); 
	std::cout << "ShrubberyCreationForm constructor called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &self) : Form(self.getName(), self.getGrade(), self.getGradeEx()), _target(self.getTarget()) {

	std::cout << "ShrubberyCreationForm copy constructor called !" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &self) {

	this->_target = self.getTarget();
	std::cout << "ShrubberyCreationForm copy assignement called !" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	std::cout << "ShrubberyCreationForm destructor called !" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const {

	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (!this->getSigned() || executor.getGrade() > this->getGradeEx() || executor.getGrade() > this->getGrade())
		throw GradeTooLowException();

	std::ofstream	outFile((this->_target + "_shrubbery").c_str());
	outFile << "                                                         .\n"
			<< "                                              .         ;\n"
			<< "                 .              .              ;%     ;;\n"
			<< "                   ,           ,                :;%  %;\n"
			<< "                    :         ;                   :;%;'     .,   \n"
			<< "           ,.        %;     %;            ;        %;'    ,;\n"
			<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
			<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
			<< "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
			<< "                `%;.     ;%;     %;'         `;%%;.%;'\n"
			<< "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
			<< "                    `:%;.  :;bd%;          %;@%;'\n"
			<< "                      `@%:.  :;%.         ;@@%;'   \n"
			<< "                        `@%.  `;@%.      ;@@%;         \n"
			<< "                          `@%%. `@%%    ;@@%;        \n"
			<< "                            ;@%. :@%%  %@@%;       \n"
			<< "                              %@bd%%%bd%%:;     \n"
			<< "                                #@%%%%%:;;\n"
			<< "                                %@@%%%::;\n"
			<< "                                %@@@%(o);  . '         \n"
			<< "                                %@@@o%;:(.,'         \n"
			<< "                            `.. %@@@o%::;         \n"
			<< "                               `)@@@o%::;         \n"
			<< "                                %@@(o)::;        \n"
			<< "                               .%@@@@%::;         \n"
			<< "                               ;%@@@@%::;.          \n"
			<< "                              ;%@@@@%%:;;;. \n"
			<< "                          ...;%@@@@@%%:;;;;,..    \n" << std::endl;
	outFile.close();
}