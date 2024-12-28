//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSCollection.h>

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSCollection (PDEndpointServerEntityHooks)
+ (void)endpointServer:(id)arg1 willQueryForObjectWithPredicate:(id)arg2;	// IMP=0x00200000000fcf3c
+ (long long)migrationOrder;	// IMP=0x0010000000125908
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001257bd
+ (id)entityName;	// IMP=0x0010000000125331
+ (id)recordType;	// IMP=0x0010000000192324
- (_Bool)willBeProcessedByEndpointServer:(id)arg1;	// IMP=0x00200000000fcf34
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0010000000125913
@property(readonly, nonatomic) NSArray *immutableColumnNames;
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000125542
- (void)bindTo:(id)arg1;	// IMP=0x001000000012533e
@property(readonly, nonatomic) NSString *parentReferenceName;
- (long long)syncOrder;	// IMP=0x0010000000192694
- (long long)syncBackend:(id)arg1;	// IMP=0x0010000000192653
- (void)populate:(id)arg1;	// IMP=0x00100000001924c2
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000019233c
@property(readonly, nonatomic) long long syncableItemType;

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
@property(nonatomic, getter=isImmutabilityEnforced) _Bool enforceImmutability;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
