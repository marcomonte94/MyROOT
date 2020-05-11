void firstFit() {
  //Create a histogram with 50 bins and range (-10, 10)
  auto h = new TH1F("h", "My Histogram", 50, -6, 6);
  /*Fill the histogram with n=10000 gaussian pseudorandom
  numbers.*/
  h->FillRandom("gaus");
  auto f = new TF1("f1", "gaus");
  h->Fit(f);
  gStyle->SetOptFit();
  h->Draw();
  f->Draw("Same");
}
