//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9JetEngine8ProxyBag : NSObject
{
    MISSING_TYPE *bag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000095810
- (id)init;	// IMP=0x00000000000957b0
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000095760
- (id)URLForKey:(id)arg1;	// IMP=0x0000000000095740
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000095720
- (id)integerForKey:(id)arg1;	// IMP=0x0000000000095700
- (id)doubleForKey:(id)arg1;	// IMP=0x00000000000956e0
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000955e0
- (id)boolForKey:(id)arg1;	// IMP=0x00000000000955c0
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000955a0
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;	// IMP=0x0000000000095390

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end

