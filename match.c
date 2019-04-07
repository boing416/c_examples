int    match(char *s1, char *s2)
{
    
   
    if(*s2 && *s1 == '*')
      return (match(s1, s2 + 1) || match(s1 + 1, s2));      
    else if(*s1 && *s2 == '*')
      return (match(s1, s2 + 1) || match(s1 + 1, s2));      
    else if(!(*s1) && *s2 == '*')
      return (match(s1, s2 + 1));      
    else if((*s2 == '\0') && (*s1 == '*'))
      return (match (s1 + 1, s2));      
    else if(*s1 && *s2 && *s1  == *s2)
      return (match(s1+1,s2+1));
    else if(!*s1 && !*s2)
      return (1);
    
    return (0);
}
int main() {
 int i = match("aaaaaaf", "*a");
    
    printf("I: %d",i);
  return 0;
}
