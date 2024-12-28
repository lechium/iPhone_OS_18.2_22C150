//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSHandoutAssignedItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSHandoutAssignedItem (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x002000000000f0eb
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000000f005
+ (id)entityName;	// IMP=0x001000000000ebad
+ (id)recordType;	// IMP=0x00100000001687ef
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x002000000000f0f6
- (void)bindTo:(id)arg1;	// IMP=0x001000000000edf4
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000000ebba
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000168b78
- (void)populate:(id)arg1;	// IMP=0x00100000001689a6
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000001687fc

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
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
