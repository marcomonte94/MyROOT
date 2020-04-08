void mygraph()
{
  auto c = new TCanvas;
  c->SetGrid();
  c->SetLogy();

  auto g = new TGraph();
  int x[]  {0, 1, 2, 3, 4};
  for (auto i: x) {
    g->SetPoint(i, i, i*i);
  }
  g->SetTitle("My graph;my_{X};myY");
  g->SetLineColor(kOrange);
  g->SetLineWidth(2);
  g->SetMarkerStyle(kFullSquare);
  g->SetMarkerColor(kRed);

   // Draw!
   g->Draw("APL");
}
