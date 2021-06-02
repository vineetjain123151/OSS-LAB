

# include <stdio.h>
# include <string.h>

int main( )
{

	
	FILE *filePointer ;
	
	
	char dataToBeWritten[50]
		= "GeeksforGeeks-A Computer Science Portal for Geeks";

	
	filePointer = fopen("OSS.c", "w") ;
	
	
	if ( filePointer == NULL )
	{
		printf( "OSS.c file failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		
		
		if ( strlen ( dataToBeWritten ) > 0 )
		{
			
			
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		
		
		fclose(filePointer) ;
		
		printf("Data successfully written in file OSS.c\n");
		printf("The file is now closed.") ;
	}
	return 0;		
}

