//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class CNContact, CNGroupIdentityHeaderViewController, NSString;

@protocol CNGroupIdentityHeaderViewControllerDelegate <NSObject>

@optional
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 didDismissSharedProfileBannerWithUpdatedContact:(CNContact *)arg2 forAction:(unsigned long long)arg3;
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 sharedProfileBannerDidUpdateContact:(CNContact *)arg2 forAction:(unsigned long long)arg3;
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 willPresentDisambiguationUIForActionType:(NSString *)arg2;
- (void)groupIdentityHeaderViewController:(CNGroupIdentityHeaderViewController *)arg1 didPerformActionOfType:(NSString *)arg2 fromDisambiguation:(_Bool)arg3;
- (void)headerViewControllerDidTapActionButton:(CNGroupIdentityHeaderViewController *)arg1;
@end

