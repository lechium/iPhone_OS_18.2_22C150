//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _SLSheetMaskLayer : CALayer
{
    double _clipCornerRadius;	// 8 = 0x8
    UIColor *_clipBackgroundColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e0bd
@property(retain, nonatomic) UIColor *clipBackgroundColor; // @synthesize clipBackgroundColor=_clipBackgroundColor;
@property(nonatomic) double clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000001df26

@end
