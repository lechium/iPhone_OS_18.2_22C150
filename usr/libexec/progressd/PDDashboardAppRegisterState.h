//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PDDatabaseValue;

@interface PDDashboardAppRegisterState : NSObject
{
    NSString *_appIdentifier;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x002000000016e64a
+ (id)identityColumnName;	// IMP=0x001000000016e63d
+ (id)entityName;	// IMP=0x001000000016e630
- (void).cxx_destruct;	// IMP=0x002000000016e76f
- (void)bindTo:(id)arg1;	// IMP=0x001000000016e6e2
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000016e593
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000016e375

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

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

