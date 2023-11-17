int max (int i1, int i2) {

     if (i1 > i2) return i1;

     return i2;

}


int gcd (int& a, int& b) {

     while (a != b) {
          if (a > b) a -= b;
          else b -= a;
     }
     return a;

}
