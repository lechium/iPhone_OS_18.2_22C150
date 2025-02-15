//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDDatabaseValue;

@interface PDBlockedApp : NSObject
{
    NSString *_appIdentifier;	// 8 = 0x8
}

+ (id)identityColumnName;	// IMP=0x00200000000e37ec
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000e376e
+ (id)entityName;	// IMP=0x00100000000e35c2
- (void).cxx_destruct;	// IMP=0x00200000000e3813
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00100000000e374a
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000e3707
- (id)init;	// IMP=0x00100000000e35cf

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

