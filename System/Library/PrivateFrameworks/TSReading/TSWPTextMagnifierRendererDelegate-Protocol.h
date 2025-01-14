//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSString;

@protocol TSWPTextMagnifierRendererDelegate
@property(readonly, nonatomic) NSString *maskImageName;
@property(readonly, nonatomic) NSString *overlayImageName;
@property(readonly, nonatomic) NSString *underlayImageName;
- (_Bool)shouldHideCanvasLayer;
- (void)drawMagnifierClippedCanvasLayer:(CALayer *)arg1 inContext:(struct CGContext *)arg2;
@end

