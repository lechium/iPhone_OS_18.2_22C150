//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSData, NSString;
@protocol PDDatabaseValue;

@interface PDCKRecordZone : NSObject
{
    CKServerChangeToken *_serverChangeToken;	// 8 = 0x8
    NSData *_clientChangeTokenData;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
}

+ (id)identityColumnName;	// IMP=0x002000000008166b
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000815ed
+ (id)entityName;	// IMP=0x001000000008144d
- (void).cxx_destruct;	// IMP=0x00200000000816c5
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x0010000000081557
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000008145a

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
