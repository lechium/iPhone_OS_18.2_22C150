//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollView, UIViewController;
@protocol SUUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SUUIScrollingSegmentedControllerItemContext : NSObject
{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;	// 8 = 0x8
    struct UIEdgeInsets _desiredContentInsetsAdjustment;	// 40 = 0x28
    UIScrollView *_insetAdjustedContentScrollView;	// 72 = 0x48
    id <SUUIScrollingSegmentedControllerItemContextDelegate> _delegate;	// 80 = 0x50
    UIViewController *_viewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000cc68f
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SUUIScrollingSegmentedControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;	// IMP=0x00000000000cc450
- (void)updateAppliedContentInsetsAdjustment;	// IMP=0x00000000000cc304
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000cc2b3
- (id)initWithViewController:(id)arg1;	// IMP=0x00000000000cc235
- (id)init;	// IMP=0x00000000000cc221

@end

