//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class CKPopoverViewLayoutMetrics, CKSendMenuPopoverPresentationController;

@protocol CKSendMenuPopoverPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>
- (void)sendMenuPresentationController:(CKSendMenuPopoverPresentationController *)arg1 didChangePopoverLayoutMetrics:(CKPopoverViewLayoutMetrics *)arg2;
- (void)sendMenuPresentationControllerWillDismiss:(CKSendMenuPopoverPresentationController *)arg1;
- (void)sendMenuPresentationControllerWantsToBeDismissed:(CKSendMenuPopoverPresentationController *)arg1;
@end
