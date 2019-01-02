#include <stdlib.h> // card > pixar.ppm
#include <stdio.h>

struct Color {
    char x, y, z;
    Color(char a, char b, char c = 0)
    {
        x = a;
        y = b;
        z = c;
    }
};

// main
int main()
{
    int w = 900;
    int h = 128;
    
    // header for binary Portable Pixmap Format
    printf("P6 %d %d 255 ", w, h);

    for (int y = 0; y < h; y++)
        for (int x = 0; x < w; x++)
        {
            Color color = Color(0, 0, 0);
            printf("%c%c%c", (int)color.x, (int)color.y, (int)color.z);
        }

    return 0;
} 