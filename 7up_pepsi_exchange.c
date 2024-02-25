// Glass A contains Pepsi and Glass B contains 7Up. Suggest a way to exchange the contents of glass A & B using C program.
#include <stdio.h>
#include <string.h>

int main() {
    char GlassA[6] = "Pepsi";
    char GlassB[5] = "7Up";
    char temp[6];
    printf("Initially, Glass A contains: %s and Glass B contains: %s\n", GlassA, GlassB);
    strcpy(temp,GlassA);
    strcpy(GlassA,GlassB);
    strcpy(GlassB,temp);
    printf("After exchange, Glass A contains: %s and Glass B contains: %s\n", GlassA, GlassB);
    return 0;
}
