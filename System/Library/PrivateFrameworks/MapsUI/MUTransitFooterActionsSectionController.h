//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUFooterActionsSectionController, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitFooterActionsSectionController
{
    MUFooterActionsSectionController *_underlyingSectionController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000161006
- (id)revealedAnalyticsModule;	// IMP=0x0000000000160fe9
- (id)analyticsModule;	// IMP=0x0000000000160fcc
- (id)infoCardChildUnactionableUIElements;	// IMP=0x0000000000160faf
- (id)infoCardChildPossibleActions;	// IMP=0x0000000000160f92
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
- (void)reloadData;	// IMP=0x0000000000160f3b
- (struct CGRect)impressionsFrame;	// IMP=0x0000000000160edf
@property(readonly, nonatomic) UIView *sectionView;
- (id)initWithTransitLineItem:(id)arg1 actionManager:(id)arg2;	// IMP=0x0000000000160e2f

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,R,N

@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
