// This code creates the data set.
void macro1() {

  const int npoint = 10;
  double xdata[npoint] = {1,2,3,4,5,6,7,8,9,10};
  double ydata[npoint] = {6,12,14,20,22,24,35,45,44,53};
  double yerr[npoint] = {5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};

  auto g = new TGraphErrors(npoint, xdata, ydata, nullptr, yerr);
  g->SetMarkerStyle(kOpenCircle);
  g->SetMarkerColor(kBlack);
  g->SetLineColor(kBlack);
  g->SetTitle("Measurement;lenght [cm];Arb.Units");
  g->GetXaxis()->SetTitle("lenght [cm]");
  g->GetYaxis()->SetTitle("Arb.Units");
  g->Draw("APE");

  //Fitting a linear function to previous data
  auto f = new TF1("Linear law", "[0]+x*[1]", .5, 10.5);
  f->SetLineColor(kRed);
  f->SetLineStyle(4);
  g->Fit(f);

  //Building a legend
  auto legend = new TLegend(.1, .7, .3, .9, "Lab. Lesson 1");
  legend->AddEntry(g, "Exp. Points", "PE");
  legend->AddEntry(f, "Fit function", "L");
  legend->Draw();
}
