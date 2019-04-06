//
// Created by rudri on 3/29/2019.
//
#include "Vector.h"
namespace UTEC{
    void vector::push_back(const int value) {
        if (_arr==nullptr){
		int arreglo[100];
		_arr = arreglo;
		*_arr = value;
		_size++;
	}
	else{
		int *temp = nullptr;
		temp = _arr;
		for (int i=0;i<_size;i++){
			temp = temp++;
		}
		*temp = value;
		_size++;
	}
    }

    void vector::pop_back() {
        if (_size!=0){
		int *temp = nullptr;
		temp = _arr;
		for (int i=0;i<_size-1;i++){
			temp = temp++;
		}
		delete temp;
	}
    }

    vector::vector() : _arr{nullptr}, _size(0) {}
    vector::~vector() {
	if(_size!=0){
		int *temp1 = nullptr;
		int *temp2 = nullptr;
		temp1 = _arr;
		temp2 = _arr;
		for (int i=0;i<_size;i++){
			temp1++;
			delete temp2;
			temp2 = temp1;
		}
	}
        // Completarlo
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}

}
