#include "Events.h"

Events::Events()
{
	//messages = std::thread(std::bind(this, messages));
}

Events::Events(int t)
{
	//messages = std::thread(std::bind(this, messages));
	timer = t;
}


int Events::send()
{
	std::cout << "Attempting send: "  << eventQueue.front() << std::endl; //scope?
	return eventQueue.front();
}

void Events::enque(int queueItem, int timer)
{	
	std::cout << "Enque: " << queueItem << std::endl; //valid data
	eventQueue.push(queueItem);
	std::cout << "Queue Now contains: " << eventQueue.front() << std::endl;//valid data 
}

void Events::deque()
{
	eventQueue.pop();
}

Events::~Events()
{
}
