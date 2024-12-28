//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRPhoneSearch : NSObject
{
    NSString *_countryCode;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
}

+ (id)copyNormalizedPhoneNumber:(struct __CFString *)arg1 countryCode:(struct __CFString *)arg2;	// IMP=0x00400000000181d3
+ (id)copyCountryCode;	// IMP=0x00100000000181bd
- (_Bool)matchesUTF8String:(const char *)arg1 matchType:(unsigned long long)arg2;	// IMP=0x002000000001869b
- (_Bool)hasPrefix:(id)arg1;	// IMP=0x001000000001851c
- (_Bool)isEqualToPhoneNumber:(id)arg1;	// IMP=0x00100000000183c2
- (id)_copyInterpretationsForPhoneNumber:(id)arg1;	// IMP=0x001000000001836d
- (void)dealloc;	// IMP=0x0010000000018323
- (id)initWithSearchString:(id)arg1;	// IMP=0x00100000000182b8
- (id)init;	// IMP=0x001000000001829f

@end
