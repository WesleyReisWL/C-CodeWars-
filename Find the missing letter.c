/*
Find the missing letter
Write a method that takes an array of consecutive (increasing) letters as input and that returns the missing letter in the array.

You will always get an valid array. And it will be always exactly one letter be missing. The length of the array will always be at least 2.
The array will always contain letters in only one case.

Example:

['a','b','c','d','f'] -> 'e'
['O','Q','R','S'] -> 'P'
(Use the English alphabet with 26 letters!)
*/
//Solution

char findMissingLetter(char array[], int arrayLength)
{
  //char alpha[26]="a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z";
  
int aux=0;
char letra;
  
    for(int i=0;i<arrayLength;i++)
      {
      
	  
      if(array[i]==(array[i+1]-1))
        {
        
    	}
    	else
    	{
    		aux=array[i]+1;
    		i=arrayLength;
		}
    }
    
    letra = aux;
    
    return letra;
}