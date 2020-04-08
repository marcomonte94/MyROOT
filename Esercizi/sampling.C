void sampling() {

  int npoint = 10000;
  TRandom3 r;

  auto histo = new TH1F("myHist", "Sampling histogram", 100, 0, 20);
  for (int i=0; i<npoint; i++) {
    //r.Gaus(-4, 4);
    histo->Fill(r.Exp(4));
    histo->Draw();
  }
}
