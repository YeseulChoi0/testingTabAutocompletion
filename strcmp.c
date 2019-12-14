int myStrcmp(const char *leftStr, const char *rightStr){
  //int currentComp = strcmp(leftStr, rightStr);
  int i;
  while(leftStr[i] == rightStr[i]){
    i++;
  }
  return i;
  /**
  if (currentComp < 0){
    int i = 0;
    while(leftStr[i] == rightStr[i]){
      i++;
    }
    return i;
  }if (currentComp > 0){
    int i = 0;
    while(leftStr[i] == rightStr[i]){
      i++;
    }
    return i;
  }
  **/
}
