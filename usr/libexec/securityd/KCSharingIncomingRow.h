//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface KCSharingIncomingRow : NSObject
{
}

+ (id)requiredAttributeKeys;	// IMP=0x002000000016f9cb
+ (const struct SecDbClass *)databaseItemClass;	// IMP=0x001000000016f9ac
- (id)attributesWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x002000000016fbcf
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x001000000016fb87
- (id)initWithIncomingDatabaseItem:(struct SecDbItem *)arg1 error:(id *)arg2;	// IMP=0x001000000016fae4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

