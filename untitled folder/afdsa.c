for(i=0; i<4; i++) {
  for(j=0; j<4; j++) {
    for(x=0; x<n; x++) {
      for(y=0; y<n; y++) {
        if(m[i][j]==m_in[x][y] && m[i+1][j+1]==m_in[x+1][y+1]) {
          printf("This satisfies\n");
        }
      }
    }
  }
}
