//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MapsUIImageSpec : NSObject
{
    _Bool _nightMode;	// 8 = 0x8
    _Bool _isRTL;	// 9 = 0x9
}

@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) _Bool nightMode; // @synthesize nightMode=_nightMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009347f2
- (id)imageForScale:(double)arg1 isCarPlay:(_Bool)arg2;	// IMP=0x00100000009347ea
@property(readonly, nonatomic) _Bool useSearchImageFallback;

@end

