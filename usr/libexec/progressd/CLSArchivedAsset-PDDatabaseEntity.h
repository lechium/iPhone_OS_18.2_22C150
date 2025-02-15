//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSArchivedAsset.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSArchivedAsset (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x0020000000076f99
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000076c3e
+ (id)entityName;	// IMP=0x0010000000076038
- (void)bindTo:(id)arg1;	// IMP=0x0020000000076650
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000076045

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

