// My first gaussian histogram in ROOT
void myhisto() {

  auto h = new TH1F("myHist", "Gaussian histogram", 64, -4, 4);
  h->FillRandom("gaus");
  h->SetFillColor(kBlue);
  h->Draw();
  auto f = new TF1("g", "gaus", -8, 8);
  f->SetParameters(250, 0, 1);
  f->SetFillColor(kBlack);
  f->Draw("Same");

}
