//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSOrganization.h>

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSOrganization (PDDatabaseEntity)
+ (id)searchColumnName;	// IMP=0x002000000005a294
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000005a1d7
+ (id)entityName;	// IMP=0x0010000000059c5e
- (id)tokensForSearchableColumn:(id)arg1 withValue:(id)arg2 tokenize:(_Bool)arg3;	// IMP=0x002000000005a37c
@property(readonly, nonatomic) NSArray *immutableColumnNames;
@property(readonly, nonatomic) NSArray *tokenizableColumnNames;
@property(readonly, nonatomic) NSArray *searchableColumnNames;
@property(readonly, nonatomic) unsigned long long changeHash;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

- (void)bindTo:(id)arg1;	// IMP=0x0010000000059ed4
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000059c6b

// Remaining properties
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
