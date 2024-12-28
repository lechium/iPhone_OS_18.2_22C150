//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCPartition, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface HMCRedirector : HMFObject
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSMapTable *_insertClass;	// 24 = 0x18
    NSMapTable *_updateClass;	// 32 = 0x20
    NSMapTable *_updateModelID;	// 40 = 0x28
    NSMapTable *_deleteClass;	// 48 = 0x30
    NSMapTable *_deleteModelID;	// 56 = 0x38
    HMCPartition *_partition;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000ee7a4d
- (void).cxx_destruct;	// IMP=0x0000000000ee6533
@property(readonly) NSString *label; // @synthesize label=_label;
- (id)logIdentifier;	// IMP=0x0000000000ee650b
- (void)removeRegistrationForChangeOfObjectsOfModelType:(id)arg1 forChangesOfObjectsWithModelID:(id)arg2;	// IMP=0x0000000000ee6427
- (_Bool)processInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3;	// IMP=0x0000000000ee615d
- (id)addTarget:(id)arg1 selector:(SEL)arg2 changeMask:(unsigned long long)arg3 forChangesOfObjectsWithModelType:(id)arg4 forChangesOfObjectsWithModelID:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000ee5c96
- (id)addTarget:(id)arg1 selector:(SEL)arg2 changeMask:(unsigned long long)arg3 forChangesOfObjectsWithModelType:(id)arg4 forChangesOfObjectsWithModelID:(id)arg5;	// IMP=0x0000000000ee5a5c
- (id)initWithLabel:(id)arg1 partition:(id)arg2;	// IMP=0x0000000000ee58d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
