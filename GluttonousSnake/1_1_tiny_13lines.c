#include <stdlib.h>
#include <conio.h>
int W = 20, S = 20*20, m[20*20] = {0,-1}, z[2] = {0}, l = 3, i, c = 68, C, *p, f;
int main() {
    _kbhit() && (C = _getch() & 95, C - 65 && C - 68 &&
        C - 83 && C - 87 || (C ^ c) & 20 ^ 4 && (c = C));
    srand((p = z + !!(c & 2), *p += c / 3 & 2, *p = (--*p + W) % W, main));
    f = !system("cls"), *(p = m + *z + z[1] * W) > 0 && (C = 27);
    while (*p && (m[i = rand() % S] || (--m[i], ++l, --f)));
    for (i = 0, *p = l; i < S; ++i % W || _cputs("|\n"))
        _cputs(m[i] > 0 ? m[i] -= f, "()" : m[i] ? "00" : "  ");
    return C ^ 27 && (_sleep(100), main());
}
