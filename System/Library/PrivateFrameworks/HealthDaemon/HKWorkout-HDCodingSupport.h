//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKWorkout.h>

@class NSString;

@interface HKWorkout (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000024e48e
+ (Class)hd_dataEntityClass;	// IMP=0x001000000001750b
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x001000000024e41b
- (id)codableRepresentationForSync;	// IMP=0x001000000024df22
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000291dc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

