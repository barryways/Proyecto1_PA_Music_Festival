#include "Pila.h"

void Pila::PushTo(String^ artist, String^ name) {
	Nodo^ nodoActual = gcnew Nodo();
	nodoActual->name = name;
	nodoActual->artist = artist;
	if (IsEmpty())
	{
		head = nodoActual;
		tail = nodoActual;
	}
	else {
		tail->next = nodoActual;
		tail = nodoActual;
	}
}

int Pila::Count() {
	int cantidad = 0;
	for (Nodo^ i = head; i != nullptr; i = i->next)
	{
		cantidad++;
	}
	return cantidad;
}


String^ Pila::GetNombre(int index) {
	if (index >= 0 && index < Count())
	{
		Nodo^ nodoActual = head;
		int posicion = 0;

		while (posicion < index)
		{
			nodoActual = nodoActual->next;
			posicion++;
		}

		return nodoActual->name;
	}
}

String^ Pila::GetArtista(int index) {
	if (index >= 0 && index < Count())
	{
		Nodo^ nodoActual = head;
		int posicion = 0;

		while (posicion < index)
		{
			nodoActual = nodoActual->next;
			posicion++;
		}

		return nodoActual->artist;
	}
}

void Pila::Pop() {
	Nodo^ nodoActual = head;
	if (!IsEmpty())
	{
		head = head->next;
		if (Count() == 1)
		{
			tail = head;
		}
	}
}

void Pila::PopAtEnd() {
	Nodo^ nodoActual = tail;
	if (!IsEmpty())
	{
		if (Count() == 1)
		{
			tail = tail->next;
			head = tail;
		}
		else {
			Nodo^ nodoAnterior = head;
			nodoActual = nodoAnterior->next;
			while (nodoActual != tail)
			{
				nodoAnterior = nodoActual;
				nodoActual = nodoActual->next;
			}
			nodoAnterior->next = nodoActual->next;
			tail = nodoAnterior;
		}
	}
}

void Pila::PopAt(int index) {
	Nodo^ nodoActual = head;
	if (!IsEmpty())
	{
		if (Count() == 1 || index == 0)
		{
			PopAtEnd();
		}
		else {
			if (index >= Count())
			{
				PopAtEnd();
			}
			else {
				Nodo^ anterior = head;
				nodoActual = anterior->next;
				int posicion = 1;
				while (nodoActual != tail && posicion < index)
				{
					anterior = nodoActual;
					nodoActual = nodoActual->next;
					posicion++;
				}
				anterior->next = nodoActual->next;
			}
		}
	}
}

bool Pila::IsEmpty() {
	if (head==nullptr)
	{
		return true;
	}
	return false;
}