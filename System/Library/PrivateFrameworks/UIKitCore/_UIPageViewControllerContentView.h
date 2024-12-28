//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView
{
    UIPageViewController *_pageViewController;	// 160 = 0xa0
    _UIQueuingScrollView *_scrollView;	// 168 = 0xa8
    UIPageControl *_pageControl;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000008075aa
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) _UIQueuingScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)layoutSubviews;	// IMP=0x000000000080724b
- (void)_setupPageControl:(id)arg1;	// IMP=0x00000000008071a1
- (struct CGRect)_scrollViewFrame;	// IMP=0x00000000008070e4
- (double)_pageSpacing;	// IMP=0x00000000008070a5
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000806fa4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000806ea3
- (void)invalidatePageViewController;	// IMP=0x0000000000806e4d
- (id)initWithFrame:(struct CGRect)arg1 andPageViewController:(id)arg2;	// IMP=0x0000000000806bda
- (id)preferredFocusedView;	// IMP=0x0000000000806bc5
- (_Bool)canBecomeFocused;	// IMP=0x0000000000806bbd

@end
