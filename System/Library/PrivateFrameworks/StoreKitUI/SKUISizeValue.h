//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUISizeValue : NSObject
{
    long long _height;	// 8 = 0x8
    long long _width;	// 16 = 0x10
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001831c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000183164
- (unsigned long long)hash;	// IMP=0x000000000018315a
- (id)description;	// IMP=0x00000000001830a6
- (void)unionWithSize:(struct CGSize)arg1;	// IMP=0x0000000000183077
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000000182fce

@end
