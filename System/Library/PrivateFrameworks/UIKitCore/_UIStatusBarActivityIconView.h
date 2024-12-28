//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarImageView.h"

@class CAShapeLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIconView : _UIStatusBarImageView
{
    _Bool _ringing;	// 160 = 0xa0
    double _ringingIconScale;	// 168 = 0xa8
    CAShapeLayer *_innerRingShapeLayer;	// 176 = 0xb0
    CAShapeLayer *_outerRingShapeLayer;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000155f506
@property(retain, nonatomic) CAShapeLayer *outerRingShapeLayer; // @synthesize outerRingShapeLayer=_outerRingShapeLayer;
@property(retain, nonatomic) CAShapeLayer *innerRingShapeLayer; // @synthesize innerRingShapeLayer=_innerRingShapeLayer;
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000155f413
- (void)setRinging:(_Bool)arg1 forUpdate:(id)arg2;	// IMP=0x000000000155f36a
- (void)resumePersistentAnimation;	// IMP=0x000000000155eede
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000155edd7
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x000000000155ebdd
- (void)layoutSubviews;	// IMP=0x000000000155eabb
- (void)_teardownRingingLayers;	// IMP=0x000000000155ea35
- (void)_setupRingingLayersForStyleAttributes:(id)arg1;	// IMP=0x000000000155e58f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
