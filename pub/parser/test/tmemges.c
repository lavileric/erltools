#include "token.h"
#include "memges.h"
#include <stdlib.h>
char TMP_NAME[50];
#define SIZE 0xfff

typedef struct elem {
	struct elem __far * next ;
	long content ;
} ELEM , __far * PELEM ;

main ()
{
	long i ,j;
	long value ;
	char string [20];
	PELEM courant,precedent;
	strcpy (TMP_NAME ,getenv ("TMP"));
	strcat (TMP_NAME ,"cache.fil");
	CacheInit();

	precedent = (PELEM) CacheMalloc(sizeof(ELEM));
	LCacheWrite( (long) precedent ,(long) 0);
	LCacheWrite( (long) precedent + sizeof(PELEM), (long) 0);
	for (i = 0 ; i <=  SIZE; i++) {
		j =CacheMalloc(sizeof(ELEM));
		LCacheWrite(j,(long) precedent);
		LCacheWrite(j+sizeof(long),i);
		precedent = (PELEM) j;
	}

	courant = precedent ;
	while ( courant != (PELEM) 0) {
		precedent = courant ;
		courant = (PELEM) LCacheRead((long) courant) ;
		CacheFree((long) precedent);
	}

	precedent = (PELEM) CacheMalloc(sizeof(ELEM));
	LCacheWrite( (long) precedent ,(long) 0);
	LCacheWrite( (long) precedent + sizeof(PELEM), (long) 0);
	for (i = 0 ; i <=  SIZE; i++) {
		j =CacheMalloc(sizeof(ELEM));
		LCacheWrite(j,(long) precedent);
		LCacheWrite(j+sizeof(long),i);
		precedent = (PELEM) j;
	}

	courant = (PELEM) j;
	for (i = SIZE ; i ; i--) {
		courant = (PELEM) LCacheRead((long)courant);
		value = LCacheRead((long) courant + sizeof(long));
		printf ("%d ",i);
		_ltoa((long) courant,string,10);
		printf ("%s ",&string);
		_ltoa((long) courant,string,16);
		printf ("%s ",&string);
		_ltoa((long) value,string,10);
		printf ("%s ",&string);
		ltoa((long) value,string,16);
		printf ("%s \n",&string);
	}

}
