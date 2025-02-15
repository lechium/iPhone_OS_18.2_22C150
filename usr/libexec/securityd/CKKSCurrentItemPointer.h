//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SecCKKSProcessedState;

@interface CKKSCurrentItemPointer
{
    NSString<SecCKKSProcessedState> *_state;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_currentItemUUID;	// 24 = 0x18
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00400000000a2ce1
+ (_Bool)intransactionRecordChanged:(id)arg1 contextID:(id)arg2 resync:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000a24fe
+ (long long)countByState:(id)arg1 contextID:(id)arg2 zone:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a2238
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000a1ff8
+ (id)sqlColumns;	// IMP=0x00100000000a1feb
+ (id)sqlTable;	// IMP=0x00100000000a1fde
+ (_Bool)deleteAll:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1ece
+ (id)allInZone:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1df3
+ (id)remoteItemPointers:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a1cfe
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a1b9b
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000a1a38
- (void).cxx_destruct;	// IMP=0x00200000000a19f6
@property(retain) NSString *currentItemUUID; // @synthesize currentItemUUID=_currentItemUUID;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
- (id)sqlValues;	// IMP=0x00000000000a1663
- (id)whereClauseToFindSelf;	// IMP=0x00100000000a14b9
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000a12c0
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000a111d
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000a0de8
- (id)CKRecordName;	// IMP=0x00100000000a0dd6
- (id)description;	// IMP=0x00100000000a0cd0
- (id)initForIdentifier:(id)arg1 contextID:(id)arg2 currentItemUUID:(id)arg3 state:(id)arg4 zoneID:(id)arg5 encodedCKRecord:(id)arg6;	// IMP=0x00100000000a0bef

@end

