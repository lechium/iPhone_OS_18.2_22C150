//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol PDDatabaseValue;

@interface PDPendingSyncItem : NSObject
{
    id <PDDatabaseValue> _identityValue;	// 8 = 0x8
    Class _entity;	// 16 = 0x10
    id <PDDatabaseValue> _entityIdentity;	// 24 = 0x18
    unsigned long long _syncOrder;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    unsigned long long _position;	// 48 = 0x30
    long long _syncableItemType;	// 56 = 0x38
}

+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x002000000010e108
+ (id)identityColumnName;	// IMP=0x001000000010daa0
+ (id)entityName;	// IMP=0x001000000010da74
- (void).cxx_destruct;	// IMP=0x002000000010efd0
@property(nonatomic) long long syncableItemType; // @synthesize syncableItemType=_syncableItemType;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long syncOrder; // @synthesize syncOrder=_syncOrder;
@property(readonly, nonatomic) id <PDDatabaseValue> entityIdentity; // @synthesize entityIdentity=_entityIdentity;
@property(readonly, nonatomic) Class entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue; // @synthesize identityValue=_identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x001000000010df2e
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000010dd36
- (id)initWithObject:(id)arg1 state:(long long)arg2;	// IMP=0x001000000010dbc8
@property(readonly, nonatomic) NSDictionary *statusReport;

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisDeleteTracked

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
