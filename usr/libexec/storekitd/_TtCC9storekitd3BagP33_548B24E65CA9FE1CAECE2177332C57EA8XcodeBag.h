//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtCC9storekitd3BagP33_548B24E65CA9FE1CAECE2177332C57EA8XcodeBag : NSObject
{
    MISSING_TYPE *bag;	// 8 = 0x8
    MISSING_TYPE *isExpired;	// 16 = 0x10
    MISSING_TYPE *expirationDate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000018e633
- (id)init;	// IMP=0x001000000018e5e2
- (id)dictionaryForKey:(id)arg1;	// IMP=0x001000000018e195
- (id)URLForKey:(id)arg1;	// IMP=0x001000000018e12c
- (id)stringForKey:(id)arg1;	// IMP=0x001000000018e0c3
- (id)integerForKey:(id)arg1;	// IMP=0x001000000018e05a
- (id)doubleForKey:(id)arg1;	// IMP=0x001000000018dff1
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018df94
- (id)boolForKey:(id)arg1;	// IMP=0x001000000018d690
- (id)arrayForKey:(id)arg1;	// IMP=0x001000000018d627
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, copy) NSDate *expirationDate;
@property(nonatomic) _Bool expired; // @synthesize expired=isExpired;
- (_Bool)isExpired;	// IMP=0x001000000018c102

@end

