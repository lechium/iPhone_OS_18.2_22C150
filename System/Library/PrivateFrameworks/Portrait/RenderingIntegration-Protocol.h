//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Portrait/NSObject-Protocol.h>

@class NSDictionary, PTMetalContext, PTRenderEffectManager, PTRenderRequest;
@protocol MTLCommandBuffer, MTLHeap;

@protocol RenderingIntegration <NSObject>
- (void)setResourceHeap:(id <MTLHeap>)arg1;
- (unsigned long long)minimumResourceHeapSize;
- (int)prewarm;
- (int)renderContinuousWithSource:(id <MTLCommandBuffer>)arg1 renderRequest:(PTRenderRequest *)arg2;
- (id)initWithMetalContext:(PTMetalContext *)arg1 renderEffects:(PTRenderEffectManager *)arg2 colorSize:(struct CGSize)arg3 disparitySize:(struct CGSize)arg4 debugRendering:(long long)arg5 verbose:(_Bool)arg6 options:(NSDictionary *)arg7 quality:(int)arg8;
@end

