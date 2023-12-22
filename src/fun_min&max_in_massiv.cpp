#include <vector>

int contrast (std::vector<int> v){

std::vector<int> checkV = v;

int tempMax = checkV[0];
int maxV = 0;

int tempMin = checkV[0];
int minV = 0;

for (int elMax : checkV){

    if (elMax >= tempMax){
        tempMax = elMax;
        maxV = elMax;
    }
}

for (int elMin : checkV){

    if (elMin <= tempMin){
         tempMin = elMin;
        minV = elMin;
    }
}
  return (maxV - minV);
}