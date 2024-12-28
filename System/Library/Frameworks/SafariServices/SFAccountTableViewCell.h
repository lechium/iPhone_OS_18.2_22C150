//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, SFAccountIconSharingBadgeImageCoordinator, UIImageView, UILabel, UIView, WBSSavedAccount;
@protocol SFAccountTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFAccountTableViewCell : UITableViewCell
{
    UILabel *_monogramLabel;	// 8 = 0x8
    UIView *_monogramBackgroundView;	// 16 = 0x10
    SFAccountIconSharingBadgeImageCoordinator *_badgeImageCoordinator;	// 24 = 0x18
    UIImageView *_reusedPasswordWarningImageView;	// 32 = 0x20
    WBSSavedAccount *_savedAccount;	// 40 = 0x28
    NSString *_searchPattern;	// 48 = 0x30
    id <SFAccountTableViewCellDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e5071
@property(nonatomic) __weak id <SFAccountTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(readonly, nonatomic) WBSSavedAccount *savedAccount; // @synthesize savedAccount=_savedAccount;
- (void)_updateSharedAccountBadgeImageViewIfNecessary;	// IMP=0x00000000000e4fdc
- (void)safari_copyWebsite;	// IMP=0x00000000000e4f5d
@property(readonly, nonatomic) _Bool safari_hasWebsite;
- (void)_updateAccessibilityIdentifiers;	// IMP=0x00000000000e4eb3
@property(readonly, nonatomic) _Bool isIconMonogram;
- (void)safari_copyOneTimeCode;	// IMP=0x00000000000e4e14
@property(readonly, nonatomic) _Bool safari_hasOneTimeCodeGenerator;
- (void)safari_copyPassword;	// IMP=0x00000000000e4d27
- (void)safari_copyUserName;	// IMP=0x00000000000e4ca8
- (void)_layoutReusedPasswordWarningImageViewIfNecessary;	// IMP=0x00000000000e49f0
- (void)setSavedAccount:(id)arg1 searchPattern:(id)arg2 emphasizeUserName:(_Bool)arg3 isReusedPassword:(_Bool)arg4;	// IMP=0x00000000000e49a0
- (void)setSavedAccount:(id)arg1 searchPattern:(id)arg2 emphasizeUserName:(_Bool)arg3 shouldDifferentiateWithGroupName:(_Bool)arg4;	// IMP=0x00000000000e485c
- (void)setSavedAccount:(id)arg1 withWarnings:(id)arg2 savedAccountIsOnlySavedAccountForHighLevelDomain:(_Bool)arg3;	// IMP=0x00000000000e459f
- (void)setSavedAccount:(id)arg1 searchPattern:(id)arg2 emphasizeUserName:(_Bool)arg3;	// IMP=0x00000000000e439e
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000000e3f57
- (void)setIcon:(id)arg1;	// IMP=0x00000000000e3e50
- (void)layoutSubviews;	// IMP=0x00000000000e3e07
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000e3d0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
