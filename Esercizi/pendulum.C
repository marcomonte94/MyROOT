void pendulum() {

  const double g = 9.81;
  const int npoint = 10;
  const int nmeas = 10;
  const double dl = 0.001;
  const double dt = 0.01;
  double l[npoint] = {.1, .2, .3, .4, .5, .6, .7, .8, .9, 1.};
  double period[npoint];
  double d_period[npoint];

  for (int i=0; i<npoint; ++i){
    double t[nmeas];
    double lmeas = l[i] + 0.5 * dl *gRandom->Uniform();
    for (int j=0; j<nmeas; ++j){
      t[j] = 2*TMath::Pi() * TMath::Sqrt(lmeas/g) + dt * gRandom->Gaus();
    }
    period[i] = TMath::Mean(nmeas, &t[0]);
    d_period[i] = TMath::StdDev(nmeas, &t[0]);
  }

  






}
