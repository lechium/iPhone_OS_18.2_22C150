//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, _UIImageViewPretiledImageCacheKey;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageWrapper : NSObject
{
    UIImage *_pretiledImage;	// 8 = 0x8
    _UIImageViewPretiledImageCacheKey *_cacheKey;	// 16 = 0x10
}

+ (id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2;	// IMP=0x0060000001a06857
- (void).cxx_destruct;	// IMP=0x0000000001a069e4
@property(readonly, nonatomic) UIImage *pretiledImage; // @synthesize pretiledImage=_pretiledImage;
- (id)description;	// IMP=0x0000000001a06999
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001a0694a
- (unsigned long long)hash;	// IMP=0x0000000001a06934
- (void)dealloc;	// IMP=0x0000000001a068eb

@end

