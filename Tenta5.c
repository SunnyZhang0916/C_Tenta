/*
Vad är det som gör att man inte kan vara säker på att få ett exakt svar då man använder flyttal
*/
1/3 = 0.333333

/*
Question 4
Beskriv med ord, kod och illustrationer (t.ex. lådor och pilar) hur pekare och variabler fungerar, samt vilken information de
innehåller.
*/

/*
Question 6
Skriv funktionen what_type_of_char som tar ett tecken och returnerar ett heltal. Värdet på det heltal som returneras ska
vara:
• 1 om tecknet är en liten bokstav
• 2 om tecknet är en stor bokstav
• 3 om tecknet är en siffra
• 0 i alla andra fall
Exempel:
a = what_type_of_char(’g’)
b = what_type_of_char(’T’)
c = what_type_of_char(’7’)
d = what_type_of_char(’!’)
Detta resulterar i att a innehåller värdet 1, b innehåller 2, c innehåller 3 och d innehåller 0.
*/

int what_type_of_char(char ch)
{
  if(ch >= 'a' && ch <= 'z'){
    return 1;
  }
  if(ch >= 'A' && ch <= 'Z'){
    return 2;
  }
  if(ch >= 0 && ch <= 9){
    return 3;
  }else{
    return 0;
  }

}
