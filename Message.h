class Message
{
public:
	Message();
	~Message();
};


class ProposeMessage: public Message{
public:
	int id;
	ProposeMessage(int Id);
	~ProposeMessage();
};

class AcceptMessage: public Message{
public:
	int id;
	int value;
	AcceptMessage(int Id, int Value);
	~AcceptMessage();
};

class PromisedMessage: public Message{
public:
	int id;
	PromisedMessage(int Id);
	~PromisedMessage();	
};

class AcceptedMessage: public Message{
public:
	int id;
	int value;
	AcceptedMessage(int Id, int Value);
	~AcceptedMessage();
};
