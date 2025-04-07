int is Prime(int x, int y){
    if(x<=0) return 0;
    if(y==1) return 1;
    if(x/y==0) return 0;
    return prime(x,(y-1));
}
