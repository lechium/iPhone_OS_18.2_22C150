//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SPGeoPersonalizationEngagementMetric : NSObject
{
    _Bool _geoResultsViewed;	// 8 = 0x8
    _Bool _geoResultWasTopHit;	// 9 = 0x9
    NSNumber *_engagedGeoResultEntityRelevanceScore;	// 16 = 0x10
    NSNumber *_engagedGeoResultNumberOfVisits;	// 24 = 0x18
    NSNumber *_engagedGeoResultNumberOfVisitsGivenLocation;	// 32 = 0x20
    NSNumber *_engagedGeoResultPersonalizationType;	// 40 = 0x28
    NSNumber *_engagedGeoResultPosition;	// 48 = 0x30
    NSNumber *_engagedGeoResultTimeSinceLastVisit;	// 56 = 0x38
    NSNumber *_engagedGeoResultTimeUntilUpcomingEvent;	// 64 = 0x40
    NSNumber *_engagedResultWasTopHit;	// 72 = 0x48
    NSNumber *_firstGeoResultEntityRelevanceScore;	// 80 = 0x50
    NSNumber *_firstGeoResultIsCandidateForPromotion;	// 88 = 0x58
    NSNumber *_firstGeoResultNumberOfVisits;	// 96 = 0x60
    NSNumber *_firstGeoResultNumberOfVisitsGivenLocation;	// 104 = 0x68
    NSNumber *_firstGeoResultPersonalizationType;	// 112 = 0x70
    NSNumber *_firstGeoResultTimeSinceLastVisit;	// 120 = 0x78
    NSNumber *_firstGeoResultTimeUntilUpcomingEvent;	// 128 = 0x80
    NSNumber *_firstGeoResultWasReranked;	// 136 = 0x88
    unsigned long long _interaction;	// 144 = 0x90
    unsigned long long _numberOfPersonalGeoResults;	// 152 = 0x98
    NSString *_trialDeploymentId;	// 160 = 0xa0
    NSString *_trialExperimentId;	// 168 = 0xa8
    NSString *_trialTreatmentId;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000001d3c6
@property(retain) NSString *trialTreatmentId; // @synthesize trialTreatmentId=_trialTreatmentId;
@property(retain) NSString *trialExperimentId; // @synthesize trialExperimentId=_trialExperimentId;
@property(retain) NSString *trialDeploymentId; // @synthesize trialDeploymentId=_trialDeploymentId;
@property unsigned long long numberOfPersonalGeoResults; // @synthesize numberOfPersonalGeoResults=_numberOfPersonalGeoResults;
@property unsigned long long interaction; // @synthesize interaction=_interaction;
@property _Bool geoResultWasTopHit; // @synthesize geoResultWasTopHit=_geoResultWasTopHit;
@property _Bool geoResultsViewed; // @synthesize geoResultsViewed=_geoResultsViewed;
@property(retain) NSNumber *firstGeoResultWasReranked; // @synthesize firstGeoResultWasReranked=_firstGeoResultWasReranked;
@property(retain) NSNumber *firstGeoResultTimeUntilUpcomingEvent; // @synthesize firstGeoResultTimeUntilUpcomingEvent=_firstGeoResultTimeUntilUpcomingEvent;
@property(retain) NSNumber *firstGeoResultTimeSinceLastVisit; // @synthesize firstGeoResultTimeSinceLastVisit=_firstGeoResultTimeSinceLastVisit;
@property(retain) NSNumber *firstGeoResultPersonalizationType; // @synthesize firstGeoResultPersonalizationType=_firstGeoResultPersonalizationType;
@property(retain) NSNumber *firstGeoResultNumberOfVisitsGivenLocation; // @synthesize firstGeoResultNumberOfVisitsGivenLocation=_firstGeoResultNumberOfVisitsGivenLocation;
@property(retain) NSNumber *firstGeoResultNumberOfVisits; // @synthesize firstGeoResultNumberOfVisits=_firstGeoResultNumberOfVisits;
@property(retain) NSNumber *firstGeoResultIsCandidateForPromotion; // @synthesize firstGeoResultIsCandidateForPromotion=_firstGeoResultIsCandidateForPromotion;
@property(retain) NSNumber *firstGeoResultEntityRelevanceScore; // @synthesize firstGeoResultEntityRelevanceScore=_firstGeoResultEntityRelevanceScore;
@property(retain) NSNumber *engagedResultWasTopHit; // @synthesize engagedResultWasTopHit=_engagedResultWasTopHit;
@property(retain) NSNumber *engagedGeoResultTimeUntilUpcomingEvent; // @synthesize engagedGeoResultTimeUntilUpcomingEvent=_engagedGeoResultTimeUntilUpcomingEvent;
@property(retain) NSNumber *engagedGeoResultTimeSinceLastVisit; // @synthesize engagedGeoResultTimeSinceLastVisit=_engagedGeoResultTimeSinceLastVisit;
@property(retain) NSNumber *engagedGeoResultPosition; // @synthesize engagedGeoResultPosition=_engagedGeoResultPosition;
@property(retain) NSNumber *engagedGeoResultPersonalizationType; // @synthesize engagedGeoResultPersonalizationType=_engagedGeoResultPersonalizationType;
@property(retain) NSNumber *engagedGeoResultNumberOfVisitsGivenLocation; // @synthesize engagedGeoResultNumberOfVisitsGivenLocation=_engagedGeoResultNumberOfVisitsGivenLocation;
@property(retain) NSNumber *engagedGeoResultNumberOfVisits; // @synthesize engagedGeoResultNumberOfVisits=_engagedGeoResultNumberOfVisits;
@property(retain) NSNumber *engagedGeoResultEntityRelevanceScore; // @synthesize engagedGeoResultEntityRelevanceScore=_engagedGeoResultEntityRelevanceScore;
- (id)serializedMetric;	// IMP=0x000000000001cd42
- (id)init;	// IMP=0x000000000001cd13

@end

