import FWCore.ParameterSet.Config as cms

hltDisplacedEgammaFilter = cms.EDFilter("HLTDisplacedEgammaFilter",
    inputTag = cms.InputTag( "hltEgammaL1MatchFilter" ),
    ncandcut = cms.int32( 1 ),
    saveTags = cms.bool( False ),
    relaxed = cms.untracked.bool( True ),
    L1IsoCand = cms.InputTag( "hltL1IsoRecoEcalCandidate" ),
    L1NonIsoCand = cms.InputTag( "hltL1NonIsoRecoEcalCandidate" ),
    RecHitsEB = cms.InputTag("hltEcalRecHitAll", "EcalRecHitsEB"),
    RecHitsEE = cms.InputTag("hltEcalRecHitAll", "EcalRecHitsEE"),
    sMin_min = cms.double( 0.1 ),
    sMin_max = cms.double( 0.3 ),
    seedTimeMin = cms.double( -2 ),
    seedTimeMax = cms.double( 25 ),
    inputTrack = cms.InputTag("hltPFJetCtfWithMaterialTracks"),
    trackPtCut = cms.double(3.),
    trackdRCut = cms.double(0.5),
    maxTrackCut = cms.int32(0),
)

