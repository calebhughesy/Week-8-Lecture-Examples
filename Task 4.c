#include <stdio.h>

void readPPMHeader(char *filename, int *xres, int *yres);
void readPPM

main ()
{
    int xres, yres;
    readPPMHeader("CRW_4606.ppm", "r");
}

int x, y;
for (y = 0; y < yres; y++)
{
    for (x = 0; x < xres; x++)
    {
        fscanf(input. "%d\n%d\n%d\n", &image [x][y][0], &image[x][y][1], &image[x][y][2]);
        
    }
}

// Calculating mean value

int rTotal = 0, gTotal = 0, bTotal = 0;
for (y = 0; y < yres; y++)
{
    for (x = 0; x < xres; x++)
    {
     rTotal += image[x][y][0];
     gTotal += image[x][y][1];
     bTotal += image[x][y][2];
     
    }
    
    rTotal /= (xres*yres);
    gTotal /= (xres*yres);
    bTotal /= (xres*yres);
    
    printf ("%f %f %f", rTotal, gTotal, bTotal);

