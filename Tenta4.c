/*
PiC_Tenta_181101

Skriv en funktion som summerar elementen i en array. Den ska ha följande funktionsdeklaration:

int sum_array( int size, int array[] )

Notera att du får inte använda någon snurra, dvs for, while, do-while, för att lösa probleme
*/

int sum_array(int size, int array[] )
{

  if(size == 0){
    return 0;
  }

  return sum_array(size-1, array) + array[size-1];
}
