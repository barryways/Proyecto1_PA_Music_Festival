#pragma once
//push
//pop

template <typename T>

class Stack
{
private:
	struct Node {
		T* valorNodo;
		Node* nodoSiguiente;

		Node(T* valorNodo) {
			this->valorNodo = valorNodo;
			this->nodoSiguiente = nullptr;
		}
	};

	int longitud;
	Node* cabeza;

public:

	Stack() {
		this->cabeza = nullptr;
		this->longitud = 0;
	}

	int longitudPila() {
		return this->longitud;
	}
	
	bool pilaVacia() {
		return this->cabeza == nullptr;
	}
	void push(T* valorNodo) {
		this->longitud++;
		Node* nodoActual = new Node(valorNodo);
		if (this->pilaVacia())
		{
			this->cabeza = nodoActual;
			return;
		}
		nodoActual->nodoSiguiente = this->cabeza;
		this->cabeza = nodoActual;

	}
	T* peek() {
		return this->cabeza->valorNodo;
	}
	T* pop() {
		T* itemNodo = this->cabeza->valorNodo;
		this->cabeza = this->cabeza->nodoSiguiente;

		this->longitud--;

		return itemNodo;
	}
};
