#include "Entity.h"

Entity::Entity() {//this is a base class
	//Stuff that's needed for this is already done in other files. So this remains empty
}

Entity::~Entity(){
	//deconstructor
}
void Entity::move(MOVEMENTDIRECTION movementdir,COORD pos,Map &map) {
	// left blank as this WILL be overidden.

}
int Entity::getX(){
	return position.getX(); //Gets your X position from Position Header file
}

int Entity::getY(){
	return position.getY(); //Gets your Y position from Position Header file
}
void Entity::setpos(COORD pos) {
	position.setPos(pos);
}
COORD Entity::returnPos(){
	COORD entitypos = position.returnPos();
	return entitypos;
}

int Entity::gethealth() {
	return health;
}

void Entity::sethealth(int x) {
	health = x;
}

void Entity::setalive(bool live) {
	alive = live;
}

char Entity::getsymbol() {
	return entitysymbol;
}

void Entity::setsymbol(char symbol) {
	entitysymbol = symbol;
}
