#pragma once

#include "Node.h"

ref class Cola
{
public:
	Nodo^ head;
	Nodo^ tail;

	void PushTo(String^ artist, String^ name);
	int Count();
	String^ GetNombre(int index);
	String^ GetArtista(int index);
	void Pop();
	void PopAtEnd();
	void PopAt(int index);
	bool IsEmpty();
};
