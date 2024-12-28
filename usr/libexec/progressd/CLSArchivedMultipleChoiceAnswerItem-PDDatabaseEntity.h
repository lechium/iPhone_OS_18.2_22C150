//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSArchivedMultipleChoiceAnswerItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSArchivedMultipleChoiceAnswerItem (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000001a6049
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001a5ead
+ (id)entityName;	// IMP=0x00100000001a5c1d
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x00200000001a5f49
- (void)bindTo:(id)arg1;	// IMP=0x00100000001a5d39
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000001a5c2a

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
