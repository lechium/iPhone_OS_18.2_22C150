//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (WebCoreCALayerExtras)
+ (id)_web_renderLayerWithContextID:(unsigned int)arg1 shouldPreserveFlip:(_Bool)arg2;	// IMP=0x0080000000f47510
- (void)_web_clearContents;	// IMP=0x0010000000f47800
- (_Bool)_web_maskMayIntersectRect:(struct CGRect)arg1;	// IMP=0x0010000000f476a0
- (_Bool)_web_maskContainsPoint:(struct CGPoint)arg1;	// IMP=0x0010000000f47570
- (void)_web_setLayerTopLeftPosition:(struct CGPoint)arg1;	// IMP=0x0010000000f47440
- (void)_web_setLayerBoundsOrigin:(struct CGPoint)arg1;	// IMP=0x0010000000f473c0
- (void)web_disableAllActions;	// IMP=0x0010000000f471b0
@end

