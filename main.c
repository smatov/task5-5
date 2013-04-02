/*
 * main.c
 *
 * Created on: 26.03.2013
 * Author: dev
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fcntl.h>
void myStrcpy(char *s, char *t, int n) {
	while (*s && *t && n > 0) {
		*s = *t;
		s++;
		t++;
		n--;
	}
}
void myStrcat(char *s, char *t, int n) {
	while (*(s))
		s++;
	while (*t && n > 0) {
		*s = *t;
		s++;
		t++;
		n--;
	}
}
int myStrcmp(char *s, char *t, int n) {
	int i;
	if(n==0) return 0;
	for (i = 0; i < n; i++) {
		if (*s != *t)
			break;
		if (*s == '\0')
			return 0;
		s++;
		t++;

	}
	if (*s - *t > 0)
		return 1;
	else
		return -1;
}

int main() {
	char *b = malloc(sizeof(char) * 50);
	char *a = malloc(sizeof(char) * 50);
	strcpy(a, "a");
	strcpy(b, "fg");
	int n = 0;
	/*int x =*/ myStrcat(a, b, n);
	printf("%s\n", a);
	//printf("%d\n", x);
	free(a);
	free(b);
	return 0;

}
