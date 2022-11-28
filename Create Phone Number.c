/*       
Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

Example
create_phone_number(phnum, (const unsigned char[]){1,2,3,4,5,6,7,8,9,0});
     phnum <- "(123) 456-7890"
The returned format must be correct in order to complete this challenge.

Don't forget the space after the closing parentheses!
*/

//Solution

char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
  int aux=0;
    int n=0;
    for (int i=0;i<15;i++){
      switch (i) {
      case 0:
          phnum[i]='(';
          break;
      case 4:
          phnum[i]=')'
            ;break;
      case 5:
          phnum[i]=' ';
            break;
      case 9:
          phnum[i]='-';
          break;
      case 14:
          phnum[i]='\0';
          break;
      default:
          phnum[i]=nums[n]+48;
          n++;
          break;
      }    
    }
    return phnum;
}