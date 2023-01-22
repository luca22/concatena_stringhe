#define _CRT_SECURE_NO_WARNINGS

#include <stdint.h>
#include <stdint.h>
#include <string.h>

char* concatena(const char* prima, const char* seconda) {

	
	

	if (prima == NULL || seconda == NULL) {
		
		return NULL;
	}
	
	char* res = malloc(strlen(prima) + strlen(seconda) + 1);

	strcpy(res, prima);
	strcat(res, seconda);


	return res;

	
}