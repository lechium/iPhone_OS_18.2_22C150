//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSProgressReportingCapability.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSProgressReportingCapability (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x00200000000d661b
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000d659c
+ (id)entityName;	// IMP=0x00100000000d62fa
+ (id)recordType;	// IMP=0x00100000001920af
- (void)bindTo:(id)arg1;	// IMP=0x00200000000d641f
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000d6307
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000192301
- (void)populate:(id)arg1;	// IMP=0x0010000000192200
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000001920bc

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
