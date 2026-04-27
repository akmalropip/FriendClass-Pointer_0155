//buatlah sebuah program yang berisi 2 class dimana terdapat class layang-layang, belah ketupat.
//di setiap class nya berisikan luas dan keliling serta input dan output.
//setiap variable memiliki akses private, bangundatar belah ketupat merupakan function keliling dari layang-layang.
//semua class hanya dapat diakses menggunakan object.

#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang
{
    private:
        float d1, d2;
        float sisi1, sisi2;
    public:
        void input();
        float Luas();
        float Keliling();
        void output();
        
        // Friend function declaration
        friend class BelahKetupat;
};
