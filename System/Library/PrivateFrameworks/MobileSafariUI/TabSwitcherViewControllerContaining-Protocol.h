//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class SFBorrowedCapsuleViewRegistration, TabGroupPickerViewController, UIView;
@protocol CollectionViewTab;

@protocol TabSwitcherViewControllerContaining <NSObject>
@property(readonly, nonatomic) UIView *transitionViewForReducedMotion;
- (TabGroupPickerViewController *)showTabGroupPicker:(id)arg1;
- (void)toggleSidebar;
- (void)tabOverviewVisibilityDidChange:(_Bool)arg1;
- (void)relinquishBorrowedCapsuleView:(UIView *)arg1;
- (SFBorrowedCapsuleViewRegistration *)borrowCapsuleViewForTab:(id <CollectionViewTab>)arg1;
@end
