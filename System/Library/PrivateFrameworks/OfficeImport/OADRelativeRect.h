//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADRelativeRect : NSObject
{
    float mLeft;	// 8 = 0x8
    float mTop;	// 12 = 0xc
    float mRight;	// 16 = 0x10
    float mBottom;	// 20 = 0x14
}

- (id)description;	// IMP=0x0000000000304829
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d5954
- (unsigned long long)hash;	// IMP=0x0000000000160741
- (void)setBottom:(float)arg1;	// IMP=0x000000000010cb38
- (float)bottom;	// IMP=0x00000000000b0f9b
- (void)setRight:(float)arg1;	// IMP=0x00000000001036c2
- (float)right;	// IMP=0x00000000000b0f85
- (void)setTop:(float)arg1;	// IMP=0x000000000010cb10
- (float)top;	// IMP=0x00000000000b0f90
- (void)setLeft:(float)arg1;	// IMP=0x000000000010369a
- (float)left;	// IMP=0x00000000000b0f7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d88ea
- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;	// IMP=0x0000000000025e76
- (id)init;	// IMP=0x0000000000103660

@end
