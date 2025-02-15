//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class PRUISModalEntryPointResponse, PRUISModalRemoteViewController;
@protocol BSInvalidatable;

@protocol PRUISModalRemoteViewControllerDelegate <NSObject>

@optional
- (void)modalRemoteViewControllerDidDismiss:(PRUISModalRemoteViewController *)arg1;
- (_Bool)modalRemoteViewController:(PRUISModalRemoteViewController *)arg1 shouldDeferInvalidation:(id <BSInvalidatable>)arg2;
- (void)modalRemoteViewController:(PRUISModalRemoteViewController *)arg1 didDismissWithResponse:(PRUISModalEntryPointResponse *)arg2;
- (void)modalRemoteViewController:(PRUISModalRemoteViewController *)arg1 willDismissWithResponse:(PRUISModalEntryPointResponse *)arg2;
@end

