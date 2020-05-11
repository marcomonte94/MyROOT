 void firsttree() {

  TFile f("SimpleTree.root", "RECREATE");
  TTree data("tree", "Example TTree");

  double x, y, z, t;
  data.Branch("x", &x, "x/D");
  data.Branch("y", &y, "y/D");
  data.Branch("z", &z, "z/D");
  data.Branch("t", &t, "t/D");
  /*
  for (int i=0; i<128; i++) {
    x = gRandom->Uniform(-10, 10);
    y = gRandom->Gaus(0, 5);
    z = gRandom->Exp(10);
    t = gRandom->Landau(0, 2);
    data.Fill();
  } */
  for (int i=0; i<12; i++) {
    x = i;
    y = i;
    z = i;
    t = i;
    data.Fill();
  }
  data.Write();
  data.Scan();
  f.Close();

}
