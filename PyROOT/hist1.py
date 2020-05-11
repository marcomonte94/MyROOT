from ROOT import TH1F, TF1, TCanvas


# Create, fill and draw histogram
h = TH1F("myHist", "myTitle", 64, -4, 4)
h.FillRandom("gaus")
c = TCanvas()
h.Draw()
for i in range(10):
    print(i)
# Create and draw function in the same canvas
f = TF1("g", "gaus", -8, 8)
f.SetParameters(250, 0, 1)
f.Draw("Same")
