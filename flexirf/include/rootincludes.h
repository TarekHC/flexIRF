// Just to make sure:
//ROOT includes
#ifdef WITH_ROOT  // ROOT found in the installation
	#include <TFile.h>
	#include <TDirectory.h>
	#include <TF1.h>
	#include <TH1D.h>
	#include <TH1F.h>
	#include <TH2F.h>
	#include <TH3F.h>
	#include <TMath.h>
	#include <TKey.h>
	#include <TVirtualPad.h>
	#include <TStyle.h>
	#include <TLegend.h>
	#include <TRegexp.h>
	#include <TCanvas.h>
	#include <TChain.h>
	#include <TString.h>
	#include <TEnv.h>
	#include <TExec.h>
	#include <TCut.h>
	#include <TApplication.h>
	#include <TEventList.h>
	#include <TStreamerInfo.h>
	#include <TList.h>
	#include <TVectorT.h>
	#include <TPaletteAxis.h>
#endif
