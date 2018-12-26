#include "Message.h"
#include <stdio.h>

Message::Message(){

}


Message::~Message(){

}

ProposeMessage::ProposeMessage(int Id){
	this->id = Id;
}

ProposeMessage::~ProposeMessage(){

}

AcceptMessage::AcceptMessage(int Id, int Value){
	this->id 	= Id;
	this->value = Value;
}

PromisedMessage::PromisedMessage(int Id){
	this->id 	= Id;
}

AcceptedMessage::AcceptedMessage(int Id, int Value){
	this->id 	= Id;
	this->value = Value;
}
