//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface LegacyTileLayer : CALayer
{
    void *_tileGrid;	// 8 = 0x8
    unsigned int _paintCount;	// 16 = 0x10
    _Bool _isRenderingInContext;	// 20 = 0x14
}

@property(readonly, nonatomic) _Bool isRenderingInContext; // @synthesize isRenderingInContext=_isRenderingInContext;
@property(nonatomic) void *tileGrid; // @synthesize tileGrid=_tileGrid;
@property(nonatomic) unsigned int paintCount; // @synthesize paintCount=_paintCount;
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000fba690
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000fba620
- (void)renderInContext:(struct CGContext *)arg1;	// IMP=0x0000000000fba5c0
- (void)layoutSublayers;	// IMP=0x0000000000fba580
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000fba530

@end
