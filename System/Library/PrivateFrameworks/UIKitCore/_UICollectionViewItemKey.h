//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewItemKey : NSObject
{
    NSIndexPath *_indexPath;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    _Bool _isClone;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007276e2
- (unsigned long long)hash;	// IMP=0x00000000007276cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000072762e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000072758e
- (id)description;	// IMP=0x00000000007272c2

@end
