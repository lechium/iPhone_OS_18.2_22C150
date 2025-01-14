//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDProfile, HDSyncEntityIdentifier, NSArray, NSNumber;
@protocol HDSyncAnchorMap;

@protocol HDSyncChange <NSObject>
@property(readonly, nonatomic) long long encodedByteCount;
@property(readonly, nonatomic) _Bool done;
@property(readonly, nonatomic) NSNumber *sequenceNumber;
@property(readonly, nonatomic) CDStruct_c12fb951 versionRange;
@property(readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;
@property(readonly, nonatomic, getter=isSpeculative) _Bool speculative;
- (id <HDSyncAnchorMap>)requiredAnchorMapWithProfile:(HDProfile *)arg1 error:(id *)arg2;
- (void)setVersionRange:(CDStruct_c12fb951)arg1;
- (void)setSequenceNumber:(long long)arg1 done:(_Bool)arg2;
- (NSArray *)decodedObjectsForProfile:(HDProfile *)arg1 error:(id *)arg2;
- (void)setObjects:(NSArray *)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id <HDSyncAnchorMap>)arg3;
- (Class)syncEntityClassForProfile:(HDProfile *)arg1;
- (HDSyncEntityIdentifier *)syncEntityIdentifier;
@end

