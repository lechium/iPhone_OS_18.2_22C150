//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface SHListeningInnerCircleLayer
{
    CALayer *_circleContainerLayer;	// 8 = 0x8
    CAShapeLayer *_circle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000006c8c
@property(retain, nonatomic) CAShapeLayer *circle; // @synthesize circle=_circle;
@property(retain, nonatomic) CALayer *circleContainerLayer; // @synthesize circleContainerLayer=_circleContainerLayer;
- (struct CGPath *)circlePathForRect:(struct CGRect)arg1;	// IMP=0x0000000000006c04
- (void)layoutSublayers;	// IMP=0x00000000000069a3
- (void)setup;	// IMP=0x00000000000067b4

@end

