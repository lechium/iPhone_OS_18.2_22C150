//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtC9storekitd3Bag : NSObject
{
    MISSING_TYPE *bag;	// 8 = 0x8
}

+ (id)xcodeBagWithBundleId:(id)arg1;	// IMP=0x002000000018b419
+ (void)setSandboxBag:(id)arg1;	// IMP=0x001000000018b3a4
+ (id)sandboxBag;	// IMP=0x001000000018b34b
+ (void)setDefaultBag:(id)arg1;	// IMP=0x001000000018b2a0
+ (id)defaultBag;	// IMP=0x001000000018b276
- (void).cxx_destruct;	// IMP=0x004000000018bb66
- (id)init;	// IMP=0x001000000018bb4c
- (id)dictionaryForKey:(id)arg1;	// IMP=0x001000000018bad5
- (id)URLForKey:(id)arg1 account:(id)arg2;	// IMP=0x001000000018ba39
- (id)URLForKey:(id)arg1;	// IMP=0x001000000018b967
- (id)stringForKey:(id)arg1;	// IMP=0x001000000018b8e9
- (id)integerForKey:(id)arg1;	// IMP=0x001000000018b86b
- (id)doubleForKey:(id)arg1;	// IMP=0x001000000018b7ed
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018b75e
- (id)boolForKey:(id)arg1;	// IMP=0x001000000018b671
- (id)arrayForKey:(id)arg1;	// IMP=0x001000000018b5f3
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;	// IMP=0x001000000018b111
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end
