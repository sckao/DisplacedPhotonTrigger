#ifndef HLTDisplacedEgammaFilter_h
#define HLTDisplacedEgammaFilter_h

/** \class HLTDisplacedEgammaFilter
 *
 *  \author Monica Vazquez Acosta (CERN)
 *
 */

#include "HLTrigger/HLTcore/interface/HLTFilter.h"

//
// class decleration
//
typedef math::XYZTLorentzVector LorentzVector;
#include <Math/VectorUtil.h>

class HLTDisplacedEgammaFilter : public HLTFilter {

   public:
      explicit HLTDisplacedEgammaFilter(const edm::ParameterSet&);
      ~HLTDisplacedEgammaFilter();
      static void fillDescriptions(edm::ConfigurationDescriptions & descriptions);
      virtual bool hltFilter(edm::Event&, const edm::EventSetup&, trigger::TriggerFilterObjectWithRefs & filterproduct);

   private:
      edm::InputTag inputTag_; // input tag identifying product contains egammas
      int    ncandcut_;        // number of egammas required
      bool   relaxed_;
      edm::InputTag L1IsoCollTag_; 
      edm::InputTag L1NonIsoCollTag_; 
      edm::InputTag rechitsEB ;
      edm::InputTag rechitsEE ;

      bool EBOnly ; 
      double sMin_min ;
      double sMin_max ;
      double sMaj_min ;
      double sMaj_max ;
      double seedTimeMin ;
      double seedTimeMax ;

      edm::InputTag inputTrk ;
      double trkPtCut ;
      double trkdRCut ;
      int maxTrkCut ;
};

#endif //HLTDisplacedEgammaFilter_h
