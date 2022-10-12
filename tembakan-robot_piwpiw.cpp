// NAMA		: Zaki Zaidan A
// NRP		: 5007221058
// Jurusan	: Teknik Mesin

#include <iostream>
#include <cmath>
using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan
#define PI 3.14159265 //makan tahu

int V0(int v0, int loss)
{
	/* Tulis fungsi mencari v0 kalian disini */
    v0 -= loss;
  	return v0;
}

float speed_loss(int v0)
{
	/* tulis fungsi hitung_loss kalian disini */
    int loss;
    
    if (v0 >= 1 && v0 <= 10){
        loss = 1;
    }
    if (v0 >= 11 && v0 <= 20){
        loss = 3;
    }
    if (v0 >= 21 && v0 <= 30){
        loss = 5;
    } 
    else{
        std::cout << "salah" << std::endl;
    }
    return loss;
}

// tipe_data range(int v0)
// {
//     /* Tulis fungsi mencari v0 kalian disini */
//     int x_max;
//     x_max = (pow(data, 2)* 1) / GRAVITASI;
//     return x_max
// }

int main() {
    /* tulis kode utama kalian disini */
    float data;
    int range;
    float v_init;
    float v_tangen_max;
    
    
  	/* input adalah kecepatan tangensial maksimum roller */
  	std::cin >> v_init;
    
    data = V0(v_init, speed_loss(v_init));
    range = (pow(data, 2)* 1) / GRAVITASI;
    
    
    v_tangen_max = (sqrt(range*10/1))+speed_loss(v_init);
    
    //std::cout << range << std::endl;
    //std::cout << data << std::endl;
    //std::cout << v_tangen_max << std::endl;
  	std::cout << range << " " << v_tangen_max << std::endl;
    
    return 0;
}
