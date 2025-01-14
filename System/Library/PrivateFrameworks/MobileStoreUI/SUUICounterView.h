//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumberFormatter, NSObject, NSString, SUUICounterTimeView, SUUICounterViewElement, SUUIImageView, UILabel;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SUUICounterView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    SUUICounterViewElement *_counterElement;	// 40 = 0x28
    SUUIImageView *_imageView;	// 48 = 0x30
    NSNumberFormatter *_numberFormatter;	// 56 = 0x38
    UILabel *_numberView;	// 64 = 0x40
    SUUICounterTimeView *_timeView;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_updateTimer;	// 80 = 0x50
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000131784
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000013177e
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001316e1
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000131667
- (void).cxx_destruct;	// IMP=0x0000000000132865
- (unsigned long long)_visibleTimeFieldsForDateFormat:(long long)arg1;	// IMP=0x0000000000132849
- (void)_updateTimerAction;	// IMP=0x00000000001327d3
- (void)_stopUpdateTimer;	// IMP=0x0000000000132799
- (void)_startUpdateTimer;	// IMP=0x00000000001325ee
- (void)_reloadUpdateTimer;	// IMP=0x0000000000132565
- (void)_reloadNumberValue;	// IMP=0x0000000000132434
- (void)_addTimeViewWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000001321ea
- (void)_addNumberViewWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0000000000132019
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000131fd8
- (void)setAlpha:(double)arg1;	// IMP=0x0000000000131f97
- (void)layoutSubviews;	// IMP=0x0000000000131bb8
- (void)didMoveToSuperview;	// IMP=0x0000000000131b77
- (void)didMoveToWindow;	// IMP=0x0000000000131b36
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000131b2e
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000131b26
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000131a0f
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001319b7
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000131796
- (void)dealloc;	// IMP=0x0000000000131621

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

