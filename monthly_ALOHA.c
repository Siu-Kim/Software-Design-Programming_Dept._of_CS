#include <stdio.h>

int main() {
  int N, h, m, s;
  int h_acm = 0, m_acm = 0, s_acm = 0;
  
  scanf("%d", &N);
  
  for(int i = 0; i < N; ++i){
    scanf("%d %d %d", &h, &m, &s);
    h_acm = h + h_acm;
    m_acm = m + m_acm;
    s_acm = s + s_acm; 
  }
  int s_tot = s_acm % 60;
  int m_plus = s_acm / 60;
  int m_tot = (m_acm + m_plus) % 60;
  int h_plus = (m_acm + m_plus) / 60;
  int h_tot = h_acm + h_plus;
  printf("%d %d %d", h_tot, m_tot, s_tot);
  
  return 0;
}