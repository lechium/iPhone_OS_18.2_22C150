//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSString;

@interface CKKSIncomingQueueEntry
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
}

+ (_Bool)allIQEsHaveValidUnwrappingKeysInContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0040000000070475
+ (id)countNewEntriesByKeyWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000070215
+ (long long)countByState:(id)arg1 contextID:(id)arg2 zone:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006ff4f
+ (id)countsByStateWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006fd11
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000006fbec
+ (id)sqlColumns;	// IMP=0x001000000006fb8e
+ (id)sqlTable;	// IMP=0x001000000006fb81
+ (id)fetch:(long long)arg1 startingAtUUID:(id)arg2 state:(id)arg3 action:(id)arg4 contextID:(id)arg5 zoneID:(id)arg6 error:(id *)arg7;	// IMP=0x001000000006f883
+ (id)tryFromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006f665
+ (id)fromDatabase:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006f447
- (void).cxx_destruct;	// IMP=0x002000000006f405
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x001000000006f29b
- (id)whereClauseToFindSelf;	// IMP=0x001000000006f111
@property(retain) NSString *uuid;
@property(readonly) NSString *contextID;
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3;	// IMP=0x001000000006ef3e
- (id)description;	// IMP=0x001000000006ed87

@end
