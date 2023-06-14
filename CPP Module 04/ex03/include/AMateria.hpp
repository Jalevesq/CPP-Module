#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
using std::string;
using std::ostream;
using std::cout;
using std::endl;

class ICharacter;

class AMateria
{

	public:

		AMateria( AMateria const & src );
		AMateria(string const & type);
		virtual ~AMateria();

		string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	
		AMateria &		operator=( AMateria const & rhs );

	protected:
		AMateria();
		string _materiaType;


};

ostream &			operator<<( ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */