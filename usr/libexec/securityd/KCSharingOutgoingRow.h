//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface KCSharingOutgoingRow : NSObject
{
}

+ (id)requiredAttributeKeys;	// IMP=0x00200000001d873c
+ (const struct SecDbClass *)databaseItemClass;	// IMP=0x00100000001d871d
- (id)attributesWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x00200000001d897a
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d8932
- (id)initWithOutgoingDatabaseItem:(struct SecDbItem *)arg1 error:(id *)arg2;	// IMP=0x00100000001d888f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

