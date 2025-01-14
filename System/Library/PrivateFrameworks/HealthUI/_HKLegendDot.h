//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface _HKLegendDot : UIView
{
    UIColor *_dotColor;	// 8 = 0x8
    UIColor *_innerDotColor;	// 16 = 0x10
    CALayer *_innerDotLayer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cdcb7
@property(retain, nonatomic) CALayer *innerDotLayer; // @synthesize innerDotLayer=_innerDotLayer;
@property(retain, nonatomic) UIColor *innerDotColor; // @synthesize innerDotColor=_innerDotColor;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000cdc5f
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x00000000000cd9e8
- (id)init;	// IMP=0x00000000000cd6a7

@end

