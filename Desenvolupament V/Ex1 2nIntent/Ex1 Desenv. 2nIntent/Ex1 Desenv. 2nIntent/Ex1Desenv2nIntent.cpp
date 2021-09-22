#include <iostream>
#include <math.h>

using namespace std;

class vec3 {
private:
    float x = 0, y = 0, z = 0;

public:
    vec3() {
        x = 0;
        y = 0;
        z = 0;
    }

    vec3(float X, float Y, float Z) {
        x = X;
        y = Y;
        z = Z;
    }

    vec3(float X, float Y) {
        x = X;
        y = Y;
        z = 0;
    }

    vec3(float X) {
        x = X;
        y = 0;
        z = 0;
    }

    float X() {
        return x;
    }

    float Y() {
        return y;
    }

    float Z() {
        return z;
    }

    
    //OPERATORS NO NECESSARIS (NO ESTÀ EN TEMPLATE)

    vec3 Normalize(vec3 V) {

        vec3 V2;

        V2.x == (V.x / (sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2))));
        V2.y == (V.y / (sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2))));
        V2.z == (V.z / (sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2))));

        return (V2);
    }

    vec3 Zero() {
        vec3 V;
        return V;
    }

    bool IsZero(vec3 V) {
        return (V.x == 0 && V.y == 0 && V.z == 0);
    }

    float DistanceTo(vec3 V) {
        float dist = 0;

        dist = sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2));

        return dist;
    }
};

int main() {

    vec3 G(6, 8, 7);

    system("pause");
    return 0;
}

//TEMPLATE (NO FUNCIONA, FALTEN OPERATORS)

/*template <typename T>

class vec3 {
private:
    T x = 0, y = 0, z = 0;

public:
    vec3() {
        x = 0;
        y = 0;
        z = 0;
    }

    vec3(T X, T Y, T Z) {
        x = X;
        y = Y;
        z = Z;
    }

    vec3(T X, T Y) {
        x = X;
        y = Y;
        z = 0;
    }

    vec3(T X) {
        x = X;
        y = 0;
        z = 0;
    }

    T X() {
        return x;
    }

    T Y() {
        return y;
    }

    T Z() {
        return z;
    }


    //OPERATORS

    vec3 Normalize(vec3 V) {

        vec3 V2;

        V2.x == (V.x / (sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2))));
        V2.y == (V.y / (sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2))));
        V2.z == (V.z / (sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2))));

        return (V2);
    }

    vec3 Zero() {
        vec3 V();
        return V;
    }

    bool IsZero(vec3 V) {
        return (V.x == 0 && V.y == 0 && V.z == 0);
    }

    T DistanceTo(vec3 V) {
        T dist = 0;

        dist = sqrt((V.x ^ 2) + (V.y ^ 2) + (V.z ^ 2));

        return dist;
    }
};

int main() {

    vec3 G(6, 8, 7);

    system("pause");
    return 0;
}
*/