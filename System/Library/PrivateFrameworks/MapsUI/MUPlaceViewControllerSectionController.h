//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceViewControllerSectionController : MUPlaceSectionController
{
    UIViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c93cd
- (_Bool)isImpressionable;	// IMP=0x00000000000c93c5
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) UIViewController *sectionViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,R,N

- (id)initWithMapItem:(id)arg1 viewController:(id)arg2;	// IMP=0x00000000000c92a3

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
