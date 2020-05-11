void niceplot() {
  cout << "Ciao a tutti!" << endl;

  // The number of points in the data set
  const int n_points = 10;
  // The values along X and Y axis
  double x_vals[n_points] = {1,2,3,4,5,6,7,8,9,10};
  double y_vals[n_points] = {6,12,14,20,22,24,35,45,44,53};
  // The errors on the Y axis
  double y_errs[n_points] = {5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};

  auto g = new TGraphErrors(n_points, x_vals, y_vals, nullptr, y_errs);
  g->SetTitle("My Very Nice Plot :)");
  g->SetMarkerStyle(kOpenCircle);
  g->GetXaxis()->SetTitle("length [cm]");
  g->GetYaxis()->SetTitle("Arb. Units");
  g->Draw("APE");

  auto f = new TF1("Fit Function", "[0] + [1]*x", 0, 10);
  f->SetParameters(-1, 5);
  f->SetLineColor(kRed);
  g->Fit(f);
  gStyle->SetOptFit();
  f->Draw("Same");

  auto legend = new TLegend(.1, .7, .3, .9, "My Results");
  legend->AddEntry(g, "Exp. Points", "PE");
  legend->AddEntry(f, "Fit Function", "L");
  legend->Draw();

  auto arrow = new TArrow(8, 8, 6.2, 23, 0.02, "|>");
  arrow->Draw();

  auto text = new TLatex(8.2, 7.5, "#splitline{Maximum}{Deviation}");
  text->Draw();

  g->GetXaxis()->ChangeLabel(3, -1, -1, -1, kRed);


}
