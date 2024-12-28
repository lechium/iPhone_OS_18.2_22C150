//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol AEPolicyReadOnlyScratchpad><AERemovable, AEPolicyWriteOnlyScratchpad><AEPersistable;

@protocol AEPolicyStore
@property(readonly, nonatomic) _Bool exists;
@property(readonly, nonatomic) _Bool hasPersistentData;
- (_Bool)cleanUpPolicyStoreWithError:(id *)arg1;
- (id <AEPolicyReadOnlyScratchpad><AERemovable>)readOnlyScratchpadForIdentifier:(NSString *)arg1;
- (id <AEPolicyWriteOnlyScratchpad><AEPersistable>)writeOnlyScratchpadForIdentifier:(NSString *)arg1;
@end
