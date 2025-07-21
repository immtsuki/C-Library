// Basic String Practice Model  ( Includes String Theory, ASCII representatoin, String Function, String Comparision )
#include <stdio.h>
#include <string.h>
int main(){
	int length, result, i;
	
	/*  
	Points to be noted : 
	A string is a sequence of characters eg : "Hello World". 
	Every character has ASCII ( numeric ) value representing the character
	eg : A = 65, B = 66, C = 67. Might differ due to case sensitivity meaning 
	A != a ( A = 65 / a = 97 ) SO, A and a is different ( Not equal )
	
	when you store a string suppose "tsuki" it is stored as ASCII value on the 
	memory location.
	
	ASCII value of tsuki :
	[116][115][117][107][105][0]
     t    s    u    k    i   \0
     
    Every string ends with null value \0 which denotes the ending of the string
    
    eg : "A" and 'A' is stored differently.
    "A" is a string so it is stored as [65][\o] ( Represents string )
    'A' is a character so it is stored as [65]	
	*/
	

	// Remove " / " to activate the code ( Remember to close after using )
	// Ctrl + . ( Activates / Comments the code )
	// Ctrl + , ( Deactivates / Uncomments the code )
	
	// Change strings on your behalf and see the result
	char string1[] = "Anil";
    char string2[] = "Shrestha";
    
    // OR
    
    //Custom String ( OPTIONAL ) Make sure to deactivate default string variables to use custom strings
//    char string1[100];
//    char string2[100];
//    for (i=0; i<=0; i++) {
//    	printf("String %d : ", i+1);
//    	scanf("%s", string1);
//    	printf("String %d : ", i+2);
//    	scanf("%s", string2);	
//	}


    // ASCII representation for your string
    
//	printf("\nASCII Representation of string1:\n");
//    length=strlen(string1);
//    for (i=0; i<=length; i++) {
//    	printf("\n %c --> %d \n", string1[i], string1[i]);
//	}
//	printf("\nASCII Representation of string2:\n");
//    length=strlen(string2);
//	for (i=0; i<=length; i++) {
//    	printf("\n %c --> %d \n", string2[i], string2[i]);
//	}
    
    
    
    // STRING FUNCTION 
    
//    strlwr(string1);                              // converts a string to lowercase
//    strupr(string1);                              // converts a string to uppercase
//   	strcat(string1, string2);                     // appends string2 to end of string1
//   	strncat(string1, string2, 1);                 // appends n characters from string2 to string1
//   	strcpy(string1, string2);                     // copy string2 to string1
//   	strncpy(string1, string2, 1);                 // copy n characters of string2 to string1
//   
//   	strset(string1, '?');     //sets all characters of a string to a given character
//   	strnset(string1, 'x', 2); //sets first n characters of a string to a given character
//   	strrev(string1);          //reverses a string
//	length = strlen(string1); // stores length of string1 in length 
   	
   	// RESULT SECTION
//   	printf("\n%s", string1); // check the string result 

//	printf("\n%d", length); // only for length	
	


/*
	STRING COMPARISION
	Points to be noted :-
	( in strcmp )
	Returns 1 if str1 is greater, -1 if str1 is lesser, 0 if both are equal 
	Eg: A = 65, C = 67 ? A - C = -2 ? strcmp() normalizes this to -1,
	meaning str1 is lesser (str2 is bigger)
	It return 1,0,-1 beside the calculation result gap to normalize.
	
	also : -1 doesn't mean str2 is bigger, it just means str1 is lesser which is still
	the same but idk  why tf  but just normalize saying str1 is lesser xD )
	
	( int strncmp )
	If you only compare the first index string 
	character it returns actual ASCII value and god knows why but when you 
	compare other than first index strings it tends to normalize it to 1, 0, -1. 
*/

//	result = strcmp(string1, string2);        // string compare all characters
//    result = strncmp(string1, string2, 1);    // string compare n characters
//   	result = strcmpi(string1, string2);       // string compare all (ignore case)
//  	result = strnicmp(string1, string2, 2);   // string compare n characters (ignore case)

//	printf("%d", result); // check the value of result 
	
//    if(result >= 1) {
//       	printf(" String 1 is bigger \n Result =  %d", result);
//   	}
//   	else if (result <= -1) {
//   	   	printf(" String 1 is lesser i.e String 2 is bigger : ) \n Result =  %d", result);
//   	}
//   	else {
//   		printf("Both strings are same (equal) \n Result =  %d", result);
//   	}

   return 0;
}

