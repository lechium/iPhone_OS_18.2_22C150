//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSMacApplicationIdentityBookmark : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001e4d2
- (void).cxx_destruct;	// IMP=0x000000000001e5e3
- (unsigned long long)hash;	// IMP=0x000000000001e5a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e4e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e4da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e45d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e327

@end
