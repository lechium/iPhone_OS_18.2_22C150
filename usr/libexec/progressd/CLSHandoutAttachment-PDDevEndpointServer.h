//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSHandoutAttachment.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSHandoutAttachment (PDDevEndpointServer)
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x0020000000172670
+ (id)recordType;	// IMP=0x0010000000171b19
+ (id)entityWillChangeNotificationName;	// IMP=0x001000000018d67b
+ (id)entityDidInsertNotificationName;	// IMP=0x001000000018d66e
+ (long long)migrationOrder;	// IMP=0x001000000018d2f0
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000018d042
+ (id)hashableColumnNames;	// IMP=0x001000000018c44d
+ (id)entityName;	// IMP=0x001000000018c440
- (void)updateAuthorizationInDatabase:(id)arg1;	// IMP=0x00200000000cbcb3
- (_Bool)writeInDatabase:(id)arg1;	// IMP=0x00100000000cbc48
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000cbb9e
- (id)payloadsWithClassIDs:(id)arg1 dependencies:(id)arg2;	// IMP=0x001000000017299f
- (long long)syncBackend:(id)arg1;	// IMP=0x00100000001725b4
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000172594
- (void)populate:(id)arg1;	// IMP=0x001000000017206d
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000171b26
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000018d2fb
- (void)bindTo:(id)arg1;	// IMP=0x001000000018ca8f
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000018c568
@property(readonly, nonatomic) unsigned long long changeHash;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N


// Remaining properties
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

