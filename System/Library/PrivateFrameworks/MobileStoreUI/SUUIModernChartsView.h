//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

#import <MobileStoreUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIScrollView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SUUIModernChartsView : UIView <UIScrollViewDelegate>
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    struct UIEdgeInsets _contentInset;	// 16 = 0x10
    UIView *_headerView;	// 48 = 0x30
    NSMutableArray *_headerViews;	// 56 = 0x38
    _Bool _hideHeader;	// 64 = 0x40
    UIScrollView *_scrollView;	// 72 = 0x48
    NSArray *_viewControllers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000144a9e
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_updateHeader;	// IMP=0x000000000014470f
- (void)_layoutViewControllersWithColumnSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000144380
- (void)_layoutHeadersWithColumnSize:(struct CGSize)arg1;	// IMP=0x0000000000144124
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000001440f6
- (void)layoutSubviews;	// IMP=0x0000000000143dc0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000143d10
- (void)setColumnViewControllers:(id)arg1;	// IMP=0x000000000014394c
@property(readonly, nonatomic) _UIBackdropView *backdropView;
- (void)dealloc;	// IMP=0x00000000001438b5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000143682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
