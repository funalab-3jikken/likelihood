#include <stdio.h>
#include "experiment.h"
#include "sbml/SBMLTypes.h"

double likelihood_simple(double init_S1, double init_S2, double k) {
  /* 変数定義 */
  double likelihood = 0.0;



  /* t = 0 ~ 10.0 までシミュレーションを実行 */




  /* 与えられたkの値に応じてlikelihoodを計算 */




  return likelihood;
}

int main(void) {
  double k;
  double likelihood;
  
  printf("k , likelihood\n");
  /* simple.xmlを読み込み尤度計算に必要な情報を取得する */
  SBMLDocument_t *d = readSBML("simple.xml");



  /* 様々なパラメータで尤度を計算する */
  for(k = 0.0 ; k < 1.01 ; k = k + 0.01) {
    
  }

  SBMLDocument_free(d);
  return 0;
}
