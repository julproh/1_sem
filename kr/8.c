struct Rect transform (struct Rect a) {
    struct Rect itog;
    int xnb, xnt, ynb, ynt;
    xnb = a.rb.x - (a.lt.y - a.rb.y);
    ynb = a.rb.y - (a.lt.y - a.rb.y);
    xnt = a.lt.x + (a.rb.x - a.lt.x);
    ynt = a.lt.y + (a.rb.x - a.lt.x);

    itog.lt.x = xnt;
    itog.lt.y = ynt;
    itog.rb.x = xnb;
    itog.rb.y = ynb;
    return itog ;
}