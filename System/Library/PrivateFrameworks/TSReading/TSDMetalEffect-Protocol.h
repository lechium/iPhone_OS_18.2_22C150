//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDMetalContext, TSDTexturedRectangle;
@protocol MTLRenderCommandEncoder;

@protocol TSDMetalEffect <NSObject>
@property(nonatomic) double opacity;
@property(nonatomic) TSDTexturedRectangle *texture;

@optional
- (void)renderEffectAtPercent:(double)arg1 withContext:(TSDMetalContext *)arg2;
- (void)renderEffectAtPercent:(double)arg1 atBufferIndex:(unsigned long long)arg2 withEncoder:(id <MTLRenderCommandEncoder>)arg3;
@end

