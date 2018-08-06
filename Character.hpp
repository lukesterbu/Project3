/**********************************************************************
** Author:      Luke Burris
** Date:        8/6/2018
** Description: Character class declaration for fantasy game
**********************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character
{
    protected:
        int atkDie; // how many attack dies
        int defDie; // how many defense dies
        int atkNum; // how many attack die faces
        int defNum; // how many defense die faces
        int armor; 
        int strength; // hit points
    public:
        Character();
        ~Character();
        virtual int attack();
        virtual int defense();
        void printStats(); // printed each attack
};

#endif