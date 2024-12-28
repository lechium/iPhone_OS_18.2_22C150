//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface PXGMetalTextureCacheEntry : NSObject
{
    id <MTLTexture> _texture;	// 8 = 0x8
    NSDate *_time;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016c7b
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
- (id)description;	// IMP=0x0000000000016b84
- (id)initWithTexture:(id)arg1;	// IMP=0x0000000000016aef

@end
