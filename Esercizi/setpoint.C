// Example of graph with SetPoint
void setpoint()
{
  // Define data
  auto g = new TGraph(); // Create a pointer to a TGraph objet
  int i = 0;
  const int npoint = 10;
  double x, y;
    for(i=0; i<npoint; i++){
      x = 0.5 * i; // Create x-point in that way
      y = 4 * x * x + exp(-x / 3) + gRandom->Gaus(); // Introduce a random Gaussian noise to data
      g->SetPoint(i, x, y); // Insert values on x-y axes

  }

  // Define fit function
  auto f = new TF1("f", "[0] * x^2 +  exp(-x * [1])", 0, 5);
  f->SetParNames("Quad", "Decay"); // Give a name to fit parameters
  f->SetParameters(1, 1); // Initial guess for fit parameters
  g->Fit(f);
  //gStyle->SetOptFit();

  // Make the plot nicer
  g->SetTitle("Plot");
  g->SetMarkerStyle(kOpenCircle);
  g->Draw("APE");
}
