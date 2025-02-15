//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CNContact, CNLabeledValue, ShortcutEditSession, UIView, UIViewController, _TtC4Maps16MapsFavoriteItem;

@protocol ShortcutEditSessionController <NSObject>
@property(nonatomic) __weak id requestInitiator;
@property(readonly, nonatomic) CNContact *meCardContact;
- (void)viewController:(UIViewController *)arg1 didEditMapItemInSession:(ShortcutEditSession *)arg2;
- (void)presentChoicePickerFrom:(UIView *)arg1;
- (void)showMeCard;
- (void)showMeCardWithAddress:(CNLabeledValue *)arg1 from:(UIView *)arg2;
- (void)createOrUpdateMeCardWithFavorite:(_TtC4Maps16MapsFavoriteItem *)arg1 completion:(void (^)(void))arg2;
- (_Bool)shortcutsContainItem:(id)arg1;
- (void)showRefineLocation:(ShortcutEditSession *)arg1;
- (void)showAddContact:(ShortcutEditSession *)arg1;
- (void)removeShortcut:(ShortcutEditSession *)arg1;
- (void)addFavoriteButtonShortcut:(ShortcutEditSession *)arg1;
- (void)editShortcut:(ShortcutEditSession *)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect)arg3;
- (void)editShortcut:(ShortcutEditSession *)arg1;
- (void)showAddShortcut:(ShortcutEditSession *)arg1;
- (void)presentedViewControllerWasDismissedBySwiping:(UIViewController *)arg1;
- (void)closeViewController:(UIViewController *)arg1;
@end

