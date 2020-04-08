// This code creates the data set.
void macro1() {
  const int npoint = 10;
  double xdata[npoint] = {1,2,3,4,5,6,7,8,9,10};
  double ydata[npoint] = {6,12,14,20,22,24,35,45,44,53};
  double yerr[npoint] = {5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};

  auto g = new TGraphErrors(npoint, xdata, ydata, nullptr, yerr);
  g->SetMarkerStyle(kOpenCircle);
  g->SetMarkerColor(kBlue);
  g->SetLineColor(kBlue);
  g->Draw("APEC");
}
