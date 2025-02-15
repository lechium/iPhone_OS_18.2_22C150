//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/NSObject-Protocol.h>

@class AKAuthorizationSubPaneConfirmButton;

@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>
- (void)subPaneConfirmButtonPerformAccountCreation:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subPaneConfirmButtonPerformExternalAuthentication:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(AKAuthorizationSubPaneConfirmButton *)arg1;

@optional
- (_Bool)validateReadyForAuthorization;
@end

