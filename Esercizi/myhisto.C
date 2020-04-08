// My first gaussian histogram in ROOT

{
  TH1F h("myHist", "Gaussian histogram", 64, -4, 4);
  h.FillRandom("gaus");
  h.SetFillColor(kBlue);
  h.Draw();
  TF1 f("g", "gaus", -8, 8);
  f.SetParameters(250, 0, 1);
  f.SetFillColor(kBlack);
  f.Draw("Same");

}
