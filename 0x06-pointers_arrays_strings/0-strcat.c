#include "main.h"
/**
  * _strcat - appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
  * @dest: input value
  * @src: input value
  * @p: pointer to the beginning of the destination
  *
  * Return: char *
  */

char *_strcat(char *dest, char *src) {
    char *p = dest;
    while (*p) {
        p++;
    }
    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}
