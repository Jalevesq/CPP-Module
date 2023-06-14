# include "../include/Character.hpp"
# include "../include/AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	for (int i = 0; i < SLOTS; i ++)
		this->_materiaInventory[i] = nullptr;
	// cout << "[Default Constructor of Character Called]" << endl;
}

Character::Character(string newName) : _name(newName)
{
	for (int i = 0; i < SLOTS; i ++)
		this->_materiaInventory[i] = nullptr;
	// cout << "[Parametric Constructor of Character Called]" << endl;
}

Character::Character( const Character & src )
{
	// cout << "[Copy Constructor of Character Called]" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	cout << "[Destructor of Character Called]" << endl;
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->_materiaInventory[i] != nullptr)
		{
			delete this->_materiaInventory[i];
			this->_materiaInventory[i] = nullptr;
		}
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	// NOT GOOD, TO FINISH
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		for (int i = 0; i < SLOTS; i++)
			this->_materiaInventory[i] = rhs._materiaInventory[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip(AMateria *m) {
	for (int i = 0; i <= SLOTS; i++)
	{
		if (this->_materiaInventory[i] == nullptr)
		{
			this->_materiaInventory[i] = m;
			cout << _name << " equips " << m->getType() << " in slot " << i << "." << endl;
			return ;
		}
	}
	cout << "Cannot equip " << m->getType() << " Materia. " << this->_name <<"'s inventory is full!" << endl;
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
		cout << "Invalid Inventory slots. Can't unequip slots "<< idx <<". Index can be between 0 and 3." << endl;
	else
	{
		if (this->_materiaInventory[idx] != nullptr)
		{
			cout << this->_materiaInventory[idx]->getType() << " Materia in slot " << idx << " successfully unequipped." << endl;
			this->_materiaInventory[idx] = nullptr;
		}
		else
			cout << "Slot " << idx << " is already empty!" << endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	this->_materiaInventory[idx]->AMateria::use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string& Character::getName() const {
	return (this->_name);
}

/* ************************************************************************** */