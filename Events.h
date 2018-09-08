#pragma once
#include <queue>
#include <iostream>
#include <thread>


class Events
{
private:
 std::queue <int> eventQueue;
 std::thread messages;
 int timer;
public:
	Events();
	Events(int t);
	int send();
	void enque(int queueItem, int timer);
	void deque();

	~Events();
};

