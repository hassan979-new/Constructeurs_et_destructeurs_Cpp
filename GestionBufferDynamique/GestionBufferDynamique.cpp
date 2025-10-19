#include <iostream>
#include <cstring>
using namespace std;

class Buffer{
    int size;
    unsigned char* data;

    public :
        Buffer(){
            size=0;
            data=nullptr;
            cout << "Construction d'un buffer de " << size << " octets." << endl;
        }

        Buffer(size_t n) : size(n){
            data = new unsigned char[size];
            memset(data,0,size);
            cout << "Construction d'un buffer de " << size << " octets." << endl;
        }

        Buffer(const Buffer& b) : size(b.size){
            data = new unsigned char[size];
            memcpy(data, b.data,size);
            cout << "Copie " << size << " octets(s) : ";
            for (size_t i = 0; i < size; i++)
            {
                printf(" %02X ",data[i]);
            }
            cout<<endl;
        }

        ~Buffer() {
            cout << "Destruction du buffer de " << size << " octets." << endl;
            delete[] data;
        }

        size_t getSize(){
            return size;
        }

        void fill(unsigned char value){
            if (data!=nullptr)
            {
                memset(data,value,size);
            }
        }

        void printHex() const{
            if (data == nullptr)
            {
                cout << "(buffer vide)" << endl;
                return;
            }

            cout << "Buffer de " << size << " octet(s) : ";
            for (size_t i = 0; i < size; i++)
            {
                printf(" %02X ",data[i]);
            }
            cout<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Buffer buf1;
    Buffer buf2(8);
    buf2.fill(0xAA);
    buf2.printHex();

    Buffer buf3 = buf2;
    return 0;
}
