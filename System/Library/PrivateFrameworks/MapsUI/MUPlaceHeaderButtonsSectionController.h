//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUHeaderButtonsSectionController, MUPlaceCallToActionAppearance, MUPlaceHeaderButtonsSectionControllerConfiguration, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, NSString, UIView, UIViewController, _MKPlaceActionButtonController;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MUPlaceHeaderButtonsSectionController : MUPlaceSectionController
{
    MUHeaderButtonsSectionController *_headerSectionController;	// 8 = 0x8
    MUPlaceHeaderButtonsSectionControllerConfiguration *_configuration;	// 16 = 0x10
    id <MUPlaceHeaderButtonsSectionControllerDelegate> _headerDelegate;	// 24 = 0x18
    id <_MKPlaceItem> _placeItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000173996
@property(retain, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) __weak id <MUPlaceHeaderButtonsSectionControllerDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
- (id)revealedAnalyticsModule;	// IMP=0x000000000017393b
- (_Bool)isImpressionable;	// IMP=0x0000000000173933
- (int)analyticsModuleType;	// IMP=0x0000000000173916
- (id)analyticsModule;	// IMP=0x00000000001738f9
- (id)infoCardChildUnactionableUIElements;	// IMP=0x00000000001738dc
- (id)infoCardChildPossibleActions;	// IMP=0x00000000001738bf
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
- (void)headerButtonsSectionControllerWillPresentMenu:(id)arg1;	// IMP=0x0000000000173866
- (void)headerButtonsSectionController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withPresentationOptions:(id)arg3;	// IMP=0x00000000001737ec
- (void)headerButtonsSectionControllerDidUpdateContent:(id)arg1;	// IMP=0x00000000001737a0
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) _Bool hasContent;
@property(retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property(retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property(nonatomic) unsigned long long primaryButtonType;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(readonly, nonatomic) UIView *sectionView;
- (id)initWithPlaceItem:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000017318c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,R,N

@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

