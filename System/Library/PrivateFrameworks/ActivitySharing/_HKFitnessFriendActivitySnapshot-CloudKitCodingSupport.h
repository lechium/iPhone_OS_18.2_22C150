//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendActivitySnapshot.h>

@class ASCodableCloudKitActivitySnapshot, HKQuantity, NSString;

@interface _HKFitnessFriendActivitySnapshot (CloudKitCodingSupport)
+ (id)_fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;	// IMP=0x0010000000004166
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;	// IMP=0x0010000000004154
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2;	// IMP=0x001000000000413f
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1;	// IMP=0x0010000000004128
+ (id)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0010000000003f2e
- (id)recordWithZoneID:(id)arg1 recordEncryptionType:(long long)arg2;	// IMP=0x0010000000003d2c
@property(readonly, nonatomic) ASCodableCloudKitActivitySnapshot *codableSnapshot;
- (_Bool)isAmm;	// IMP=0x0010000000043917
- (double)mmPercent;	// IMP=0x001000000004381f
@property(readonly, nonatomic) HKQuantity *mmgQuantity;
@property(readonly, nonatomic) HKQuantity *mmvQuantity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

