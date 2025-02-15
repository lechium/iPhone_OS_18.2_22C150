//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor;
@protocol _UIButtonMaskAnimationViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonMaskAnimationView : UIView
{
    unsigned long long _hardEdge;	// 160 = 0xa0
    UIView *_hardEdgeLine;	// 168 = 0xa8
    id <_UIButtonMaskAnimationViewDelegate> _delegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000c9b424
@property(nonatomic) id <_UIButtonMaskAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000c9b322
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000c9b2b1
@property unsigned long long hardEdge;
@property(nonatomic) UIColor *borderColor;
@property double borderWidth;
- (void)layoutSubviews;	// IMP=0x0000000000c9b004
- (struct CGRect)_frameForLine;	// IMP=0x0000000000c9ae18
- (id)init;	// IMP=0x0000000000c9ad77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

