//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VariantDescriptor : NSObject
{
    NSArray *_components;	// 8 = 0x8
    _Bool _universal;	// 16 = 0x10
    long long _version;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000106c67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000106ab7
- (unsigned long long)hash;	// IMP=0x0010000000106a92
- (id)description;	// IMP=0x0010000000106a29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000106a1e

@end
