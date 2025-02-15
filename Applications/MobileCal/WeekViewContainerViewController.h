//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactWidthWeekViewController, LargeWeekViewController;

@interface WeekViewContainerViewController
{
    CompactWidthWeekViewController *_compactController;	// 16 = 0x10
    LargeWeekViewController *_regularController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000012d7d8
@property(retain, nonatomic) LargeWeekViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactWidthWeekViewController *compactController; // @synthesize compactController=_compactController;
- (_Bool)allEventsIndividuallyRepresented:(id)arg1;	// IMP=0x001000000012d557
- (_Bool)hidesBackButton;	// IMP=0x001000000012d509
- (void)viewSwitcherSwitchedToViewWithDate:(id)arg1;	// IMP=0x001000000012d462
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x001000000012d41f
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x001000000012d36d
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x001000000012d35b
- (id)childViewControllerForCompactWidthCompactHeight;	// IMP=0x001000000012d1ca
- (id)childViewControllerForUnknownTraits;	// IMP=0x001000000012d1b8
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;	// IMP=0x001000000012d08e
- (_Bool)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;	// IMP=0x001000000012d086
- (id)currentChildViewController;	// IMP=0x001000000012d048
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x001000000012cf5d

@end

