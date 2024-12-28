//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEORPFeedbackSubmissionParameters.h>

@interface GEORPFeedbackSubmissionParameters (RAPGeoExtras)
- (_Bool)isPersonalizedMapsFeedback;	// IMP=0x002000000050db0a
- (_Bool)isTransitFeedback;	// IMP=0x001000000050daf1
- (_Bool)isDirectionsFeedback;	// IMP=0x001000000050dad8
- (void)insertImageIdIntoLookAroundContext:(id)arg1;	// IMP=0x001000000050d861
- (void)insertImageIdIntoCommonCorrections:(id)arg1;	// IMP=0x001000000050d7a8
- (void)insertImageIdIntoMapViewContext:(id)arg1;	// IMP=0x001000000050d637
- (void)insertOverviewDirectionsImageId:(id)arg1;	// IMP=0x001000000050d440
- (void)insertDirectionStepCommentId:(id)arg1 withMatchingPhoto:(id)arg2;	// IMP=0x001000000050d162
- (void)insertDirectionStepImageId:(id)arg1 withMatchingPhoto:(id)arg2;	// IMP=0x001000000050ce84
@property(readonly, nonatomic) unsigned long long logDiscardTriggerType;
- (id)stringForFeedbackType:(int)arg1;	// IMP=0x001000000050cb2f
- (void)setFeedbackType;	// IMP=0x001000000050c731
- (void)addDirectionsContextWithReport:(id)arg1 recording:(id)arg2;	// IMP=0x001000000050bdff
- (_Bool)isPOIEnrichment;	// IMP=0x0010000000c97a17
- (void)updatePOIEnrichmentWithCloudKitReceipts:(id)arg1;	// IMP=0x0010000000c9756e
- (void)appendImageIdToPoiEnrichment:(id)arg1 withPhotoMetadata:(id)arg2;	// IMP=0x0010000000c973b4
- (void)appendServerImageId:(id)arg1 withMatchingPhoto:(id)arg2;	// IMP=0x0010000000c97290
@end
