//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAShapeLayer, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIDropInteractionHighlightEffect : NSObject
{
    long long _visualState;	// 8 = 0x8
    double _highlightWidth;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    double _highlightInset;	// 32 = 0x20
    UIColor *_highlightColor;	// 40 = 0x28
    CAShapeLayer *_shapeLayer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009e0aa9
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) double highlightInset; // @synthesize highlightInset=_highlightInset;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double highlightWidth; // @synthesize highlightWidth=_highlightWidth;
- (void)dealloc;	// IMP=0x00000000009e09f5
- (struct CGRect)highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000009e093a
- (struct CGRect)clippingRectInView:(id)arg1 forView:(id)arg2;	// IMP=0x00000000009e063b
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;	// IMP=0x00000000009e0419
- (void)removeShapeLayer;	// IMP=0x00000000009e03e7
- (id)updateShapeLayerForFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000000009e0065
- (id)init;	// IMP=0x00000000009dffe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

