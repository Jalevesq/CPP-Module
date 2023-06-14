#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
using std::string;
using std::ostream;
using std::cout;
using std::endl;

#define SLOTS 4

class Character : public ICharacter
{

	public:
		Character(string newName);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		Character();
		string _name;
		AMateria *_materiaInventory[SLOTS];
};

#endif /* ******************************************************* CHARACTER_H */