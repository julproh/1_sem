int func_hyper (float x, float y) {
    if (x > -4)  {
        if((y < 1/(x+4)-3) || y < -2) return 0; 
    }
    else return 0;
    return 1;
}