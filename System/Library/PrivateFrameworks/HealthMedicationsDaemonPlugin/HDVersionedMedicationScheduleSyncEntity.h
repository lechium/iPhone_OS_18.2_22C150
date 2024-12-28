//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HDVersionedMedicationScheduleSyncEntity : NSObject
{
}

+ (id)pruneSyncedObjectsThroughAnchor:(id)arg1 limit:(unsigned long long)arg2 nowDate:(id)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000004a6d
+ (_Bool)receiveCodableSchedules:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000045ca
+ (_Bool)enumerateCodableObjectsForPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x001000000000434c
+ (_Bool)supportsSyncStore:(id)arg1;	// IMP=0x0010000000004344
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;	// IMP=0x0010000000004312
+ (long long)receiveSyncObjects:(id)arg1 version:(CDStruct_1ef3fb1f)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000003f77
+ (id)decodeSyncObjectWithData:(id)arg1;	// IMP=0x0010000000003f2a
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000003e59
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000036b1
+ (CDStruct_1ef3fb1f)syncVersionRangeForSession:(id)arg1;	// IMP=0x00100000000036a1
+ (CDStruct_1ef3fb1f)supportedSyncVersionRange;	// IMP=0x0010000000003691
+ (id)syncEntityIdentifier;	// IMP=0x0010000000003669

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
