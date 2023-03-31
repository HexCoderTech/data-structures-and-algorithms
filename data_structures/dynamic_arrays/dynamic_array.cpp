#include <cstdio>
#include <iostream>

using namespace std;

class DynamicArray{
private:
    int* _data;
    int _capacity;
    int __initialCapacity;
    int _size;
    void _copy(int* source, int* target, int size){
        for (int i = 0; i < size; i++){
            target[i] = source[i];
        }
    }
public:
    DynamicArray(int initialCapacity){
        _data = new int[initialCapacity];
        _capacity = initialCapacity;
        __initialCapacity = initialCapacity;
        _size = 0;
    }

    int capacity(){
        return _capacity;
    }

    int size(){
        return _size;
    }

    // int get(int index){
        
    // }

    void insert(int data){
        if (_size == _capacity){
            int* _tmp = _data;
            _capacity = _capacity * 2;
            _data = new int[_capacity];
            _copy(_tmp, _data, _size);
            delete _tmp;
            // return;
        }
        _data[_size] = data;
        _size++;
    }

    void remove(){
        if (_size == 0)
            return;
        _data[_size - 1] = 0;
        _size--;
        
        if(_capacity / 2 == _size && _capacity % _size == 0 && _capacity != __initialCapacity){
            int* _tmp = new int[_size];
            _copy(_data, _tmp, _size);
            delete _data;
            _data = _tmp;
            _capacity = _size;
        }
    }

    void print(){
        for(int i = 0; i < _size; i++){
            cout << _data[i] << " ";
        }
        cout << endl;
    }

    void insert(int index, int data){

    }
};

int main(){
    DynamicArray d(4);
    for (int i = 0; i < 8; i++){
        d.insert((i+1) * 10);
    }
    // cout << d.size() << " " << d.capacity() << endl;
    d.remove();
    d.remove();
    d.remove();
    cout << d.size() << " " << d.capacity() << endl;
    d.remove();
    cout << d.size() << " " << d.capacity() << endl;
    d.remove();
    cout << d.size() << " " << d.capacity() << endl;
    d.remove();
    cout << d.size() << " " << d.capacity() << endl;
    d.remove();
    cout << d.size() << " " << d.capacity() << endl;
    d.remove();
    cout << d.size() << " " << d.capacity() << endl;
    d.print();
    return 0;
}