//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADBevel : NSObject
{
    int mType;	// 8 = 0x8
    float mWidth;	// 12 = 0xc
    float mHeight;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000031ae2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031ad20
- (unsigned long long)hash;	// IMP=0x000000000031acc9
- (void)setHeight:(float)arg1;	// IMP=0x00000000001e42f6
- (float)height;	// IMP=0x000000000031acbe
- (void)setWidth:(float)arg1;	// IMP=0x00000000001e42eb
- (float)width;	// IMP=0x000000000031acb3
- (void)setType:(int)arg1;	// IMP=0x0000000000218283
- (int)type;	// IMP=0x000000000031acaa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031ac49
- (id)init;	// IMP=0x00000000001dc11c

@end

