/*
The game has no "Enemy" object but it does have specific enemies. (Abstract)

All enemies will have the following properties or behaviours
Damage - A value representing how much damage they would do to an enemy. Default enemy damage is 10.
Warcry - A proclaimation of their intent to do battle. Default enemies warcry is "Roar!"
Attack - An ability to combine a warcry with damage. (Ex: "Roar!" "Deal 10 damage to opponent").

Skeleton:
Damage - Base enemy damage
Warcry - Base enemy warcry but with the addition of "Hssssssssssss" to the end.
Attack - Warcry followed by two quick attacks on the opponent.

Troll:
Damage - 1.5x base enemy damage.
Warcry - Base enemy warcry but with the addition of "Grrrrrrrr" to the end.
Attack - Warcry followed by a single attack on the opponent.

Orc:
Damage - 2.0x base enemy damage.
Warcry - Base enemy warcry with the addition of "AHHHHHHHHHH" to the end.
Attack - Berserker Attack. Warcry --> Attack --> Warcry --> Attack

Dark Orc:
Damage - Does not use base damage
Magic - A magic spell conjured to fight enemies. (This spell can be any spell of your choosing).
Warcry - Does NOT use base warcry. Instead recite a casting spell for your magic.
Attack - Warcry followed by magic.
 */
#include <iostream>
#include <string>
using namespace std;

class Enemy
{
protected:
	int damage = 10;
	string attack;
	string warCry = "Roar!";
private:

public:
	int setDamage(int dmg)
	{
		dmg = damage;
	}
	string setWarCry(string cry)
	{
		cry = warCry;
	}

};

class Skeleton : public Enemy
{
private:
	string skeletonWarCry = warCry + " Hssssssssssss";
	string skeletonAttack = skeletonWarCry + " Two quick attacks!";
public:
	int getDamage()
	{
		return damage;
	}
	string getWarCry()
	{
		return skeletonWarCry;
	}
	string getAttack()
	{
		return skeletonAttack;

	}
};

class Troll : public Enemy
{
private:
	int trollDamage = damage * 1.5;
	string trollWarCry = warCry + "Grrrrrrrr";
	string trollAttack = trollWarCry + "Attack's Once!";
public:
	int getDamage()
	{
		return trollDamage;
	}
	string getWarCry()
	{
		return trollWarCry;
	}
	string getAttack()
	{
		return trollAttack;
	}
};
class Orc : public Enemy
{
protected:
	int orcDamange = damage * 2;
	string orcWarCry = warCry + "AHHHHHHHHHH";
	string orcAttack = "Berserk Attack " + orcWarCry + " Attack " + orcWarCry + " Attack";
private:

public:
	int getDamage()
	{
		return orcDamange;
	}
	string getWarCry()
	{
		return orcWarCry;
	}
	string getAttack()
	{
		return orcAttack;
	}
};

class DarkOrc : public Orc
{
private:
	int darkOrcDamage = 0;
	string darkOrcmagic = "Fire Bolt!";
	string darkOrcChant = "Mage of Candlekeep";
	string darkOrcAttack = darkOrcChant + " " + darkOrcmagic;

public:
	int getDamage()
	{
		return darkOrcDamage;
	}
	string getMagic()
	{
		return darkOrcmagic;
	}
	string getDarkOrcChant()
	{
		return darkOrcChant;
	}
	string getAttack()
	{
		return darkOrcAttack;
	}
};

int main()
{
	Skeleton mySkeleton;
	Troll myTroll;
	Orc myOrc;
	DarkOrc myDarkOrc;
	cout << "Skeleton Damage: " << mySkeleton.getDamage() << endl;
	cout << "Skeleton WarCry: " << mySkeleton.getWarCry() << endl;
	cout << "Skeleton attack! and used " << mySkeleton.getAttack() << endl;

	cout << endl;

	cout << "Troll Damage: " << myTroll.getDamage() << endl;
	cout << "Troll WarCry: " << myTroll.getWarCry() << endl;
	cout << "Troll Attack: " << myTroll.getAttack() << endl;

	cout << endl;

	cout << "Orc Damage: " << myOrc.getDamage() << endl;
	cout << "Orc WarCry: " << myOrc.getWarCry() << endl;
	cout << "Orc Attack: " << myOrc.getAttack() << endl;

	cout << endl;

	cout << "Dark Orc Damage: " << myDarkOrc.getDamage() << endl;
	cout << "Dark Orc WarCry: " << myDarkOrc.getMagic() << endl;
	cout << "Dark Orc WarCry: " << myDarkOrc.getDarkOrcChant() << endl;
	cout << "Dark Orc Attack: " << myDarkOrc.getAttack() << endl;
	return 0;
}