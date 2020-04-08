/* Serie geometrica: gs = 1 + x + x^2 + x^3 + .... */
{
  float gs=0;
  int N=10;
  float x=.5;

  for (int i=0; i<N; i++)
  {
    gs += pow(x,i);
    cout<<"Termine "<<i<<"-esimo della serie: "<<gs<<endl;
  }
}
