//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint;
@protocol SFPrivacyReportPrivacyProxyTipTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFPrivacyReportPrivacyProxyTipTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_insetLeading;	// 8 = 0x8
    NSLayoutConstraint *_insetTrailing;	// 16 = 0x10
    _Bool _usesInsetStyle;	// 24 = 0x18
    id <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005a4d7
@property(nonatomic) __weak id <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usesInsetStyle; // @synthesize usesInsetStyle=_usesInsetStyle;
- (void)_dismiss:(id)arg1;	// IMP=0x000000000005a43d
- (void)_openICloudPrivateRelaySettingsToLearnMore:(id)arg1;	// IMP=0x000000000005a424
- (void)_setPrivacyProxyStateToTrackers:(id)arg1;	// IMP=0x000000000005a373
- (void)_setPrivacyProxyStateToTrackersAndWebsites:(id)arg1;	// IMP=0x000000000005a2c2
- (void)_turnOnCrossSiteTrackingProtectionIfNeeded;	// IMP=0x000000000005a1d2
- (void)_notifyDelegateOfStateChange;	// IMP=0x000000000005a175
- (void)_createContentViews;	// IMP=0x0000000000058d23
- (void)prepareForReuse;	// IMP=0x0000000000058b1c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000058a6e

@end

