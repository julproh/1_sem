struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // left top
    struct Point rb; // right bottom
};
struct Rect * transform (const struct Rect * src) {
    struct Rect *dst;
    dst = (struct Rect * )malloc(sizeof(struct Rect));
    dst->rb.x = src->lt.x;
    dst ->rb.y = src->lt.y - (src ->rb.x - src->lt.x);
    dst->lt.x = src->lt.x - (src->lt.y - src->rb.y);
    dst->lt.y = src ->lt.y;
    return dst;
}
int main()
{
    struct Rect a = {{2, 4}, {7, 1}};
    struct Rect * rect;
    rect = transform(&a);
    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", rect->lt.x, rect->lt.y, rect->rb.x, rect->rb.y);
    free(rect);
    return 0;
}
