//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : NSObject
{
    unsigned int mSlideId;	// 8 = 0x8
    int mTextType;	// 12 = 0xc
    unsigned int mPlaceholderIndex;	// 16 = 0x10
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015069a
- (unsigned long long)hash;	// IMP=0x0000000000150674
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015068f
- (id)initWithSlideId:(unsigned int)arg1 textType:(int)arg2 placeholderIndex:(unsigned int)arg3;	// IMP=0x0000000000150622
- (id)initWithOutlineBullet:(id)arg1;	// IMP=0x0000000000150556

@end

