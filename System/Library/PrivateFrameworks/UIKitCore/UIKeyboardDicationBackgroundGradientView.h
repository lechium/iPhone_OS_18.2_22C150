//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIDictationView, UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackgroundGradientView : UIView
{
    UIKBRenderConfig *_renderConfig;	// 8 = 0x8
    UIDictationView *_dictationView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f8f752
@property(nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
- (void)layoutSubviews;	// IMP=0x0000000000f8f614
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000f8f60e
- (struct CGRect)_backgroundFillFrame;	// IMP=0x0000000000f8f597
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000f8f574
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000f8f558
- (void)startColorTransitionOut;	// IMP=0x0000000000f8f2a8
- (void)startColorTransitionIn;	// IMP=0x0000000000f8f080
- (id)backgroundColorForCurrentRenderConfig;	// IMP=0x0000000000f8f047
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f8efa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

