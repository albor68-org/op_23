int max (int i1, int i2) {

    if (i1 > i2) return i1;

    return i2;
    
}

int sum (int i1, int i2) {
    int i3 = i1 + i2;
    return i3;
}

int rectArea (int height, int width) {
    if (height >= 0 && width >= 0) {
        int result = height * width;
        return result;
    }
    else {
        return 0;
    }
}
