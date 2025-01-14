//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PasswordManagerUI/NSObject-Protocol.h>

@class ASCredentialRequestPaneViewController, LAContext, NSError;
@protocol ASCCredentialProtocol, ASCLoginChoiceProtocol;

@protocol ASCredentialRequestPaneViewControllerDelegate <NSObject>
- (void)requestPaneViewControllerStartCABLEAuthentication:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerNeedsReload:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewController:(ASCredentialRequestPaneViewController *)arg1 didRequestCredentialForLoginChoice:(id <ASCLoginChoiceProtocol>)arg2 authenticatedContext:(LAContext *)arg3 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg4;
- (void)requestPaneViewController:(ASCredentialRequestPaneViewController *)arg1 dismissWithCredential:(id <ASCCredentialProtocol>)arg2 error:(NSError *)arg3;
@end

