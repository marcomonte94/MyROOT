void hist1() {
  /* As well as all the others ROOT classes, histogram's class starts
  with "T", followed by "H" of histogram.
  The number indicates the dimension: 1 -> 1D histogram.
  The last charcacter if for data type: D -> double.
  */
  auto h = new TH1D("h", "First Histogram; x; Counts", 10, 0, 10);

  for (int i=0; i<1000; i++) {
    h->Fill(gRandom->Gaus(5, 2));
  }

  h->SetMinimum(0);
  h->SetFillColor(kBlue-7); // Set the color inside the histogram; color codes in "View"
  h->SetStats(1); // Set if histogram's values to show on the graphic
  gStyle->SetOptStat(); // Set how many histogram's values to show on the graphic
  h->Draw();
}
