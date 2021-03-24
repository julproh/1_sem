struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // left top
    struct Point rb; // right bottom
};
void transform (struct Rect * dst, const struct Rect * src) {
    dst->rb = src->lt;
    dst->lt.x = src->rb.x - 2*(src->rb.x - src->lt.x);
    dst->lt.y = src ->rb.y + 2*(src ->lt.y-src->rb.y);
}
int main()
{
    struct Rect rect, a = {{-1, 1}, {4, -2}};
    transform(&rect, &a);
    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
    return 0;
}