//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebSimpleLayer : CALayer
{
    _Bool _isRenderingInContext;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool isRenderingInContext; // @synthesize isRenderingInContext=_isRenderingInContext;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000f4e2a0
- (void)display;	// IMP=0x0000000000f4e150
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000f4df50
- (void)setNeedsDisplay;	// IMP=0x0000000000f4de50
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000f4de00
- (void)renderInContext:(struct CGContext *)arg1;	// IMP=0x0000000000f4dda0

@end

