//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactInlineActionsViewControllerDelegate-Protocol.h>

@class CNContactInlineActionsViewController, CNContactProperty, NSString, UIImage;

@protocol CNContactInlineActionsViewControllerDelegate_Internal <CNContactInlineActionsViewControllerDelegate>

@optional
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 willPresentDisambiguationUIForActionType:(NSString *)arg2;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 didPerformActionOfType:(NSString *)arg2 fromDisambiguation:(_Bool)arg3;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideEnabledStateForActionOfType:(NSString *)arg2;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldOverrideEnabledStateForActionOfType:(NSString *)arg2;
- (NSString *)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideTitleForActionOfType:(NSString *)arg2;
- (UIImage *)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 overrideImageForActionOfType:(NSString *)arg2;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 canPerformGroupActionOfType:(NSString *)arg2;
- (void)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 didSelectActionOfType:(NSString *)arg2;
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPresentDisambiguationUIForActionOfType:(NSString *)arg2;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPerformActionOfType:(NSString *)arg2 withContactProperty:(CNContactProperty *)arg3;
@end

