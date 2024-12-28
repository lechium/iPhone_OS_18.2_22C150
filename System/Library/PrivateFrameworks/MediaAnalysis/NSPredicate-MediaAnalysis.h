//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (MediaAnalysis)
+ (id)mad_internalPredicateNeedsProcessingForTaskID:(unsigned long long)arg1;	// IMP=0x00800000002ea868
+ (id)mad_internalPredicateWithPriority:(unsigned long long)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00800000002ea637
+ (id)mad_internalPredicateForTaskID:(unsigned long long)arg1;	// IMP=0x00800000002ea5d7
+ (id)mad_nonPrioritizedAssetsForFaceDetectionInternalPredicate;	// IMP=0x00800000002ea585
+ (id)mad_prioritizedAssetsForFaceDetectionInternalPredicate;	// IMP=0x00800000002ea533
+ (id)vcp_fullAnalysisPredatesVersionInternalPredicate:(int)arg1;	// IMP=0x00800000002ea50f
+ (id)vcp_moviesPredicate:(_Bool)arg1;	// IMP=0x00800000002ea4b6
+ (id)vcp_nonPanoPredicate:(_Bool)arg1;	// IMP=0x00800000002ea457
+ (id)vcp_livePhotosPredicate:(_Bool)arg1;	// IMP=0x00800000002ea3f8
+ (id)vcp_stillImagesPredicate:(_Bool)arg1;	// IMP=0x00800000002ea390
+ (id)vcp_imagesPredicate:(_Bool)arg1;	// IMP=0x00800000002ea33a
@end
