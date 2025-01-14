//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKCoreChatControllerDelegate-Protocol.h>
#import <ChatKit/NSObject-Protocol.h>

@class CKChatController, CKComposition, CKDetailsNavigationController, NSArray, NSString;

@protocol CKChatControllerDelegate <NSObject, CKCoreChatControllerDelegate>
- (void)chatControllerDidChangeDeferringSystemNavigationPopGestureForPlusButton:(CKChatController *)arg1;
- (void)prewarmCameraIfNecessaryForChatController:(CKChatController *)arg1;
- (void)chatController:(CKChatController *)arg1 forwardComposition:(CKComposition *)arg2;

@optional
- (_Bool)shouldUseMinimumSafeAreas;
- (void)chatController:(CKChatController *)arg1 shouldComposeVideoMessageWithRecipientAddresses:(NSArray *)arg2;
- (void)chatController:(CKChatController *)arg1 shouldComposeAudioMessageWithRecipientAddresses:(NSArray *)arg2;
- (void)chatController:(CKChatController *)arg1 shouldComposeConversationWithRecipientAddresses:(NSArray *)arg2 composition:(CKComposition *)arg3;
- (void)chatController:(CKChatController *)arg1 shouldComposeConversationWithRecipientAddresses:(NSArray *)arg2;
- (_Bool)shouldConfigureChatControllerAsCollapsed;
- (void)stopForcingOrientation;
- (void)updateSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)keyCommandDeleteConversation:(id)arg1;
- (void)keyCommandToggleDetails;
- (_Bool)isDetailsNavigationControllerDetached;
- (void)dismissAndReopenDetailsNavigationController;
- (void)showConversationList;
- (void)cancelNewMessageCompositionAnimated:(_Bool)arg1;
- (void)dismissDetailsViewAndShowConversationList;
- (void)dismissDetailsNavigationController;
- (_Bool)hasDetailsNavigationController;
- (void)presentDetailsNavigationController:(CKDetailsNavigationController *)arg1;
- (void)chatController:(CKChatController *)arg1 didDetachDetailsNavigationController:(CKDetailsNavigationController *)arg2;
- (void)screenTimeOKPressedForChatController:(CKChatController *)arg1;
- (_Bool)hasRecentlyDeletedFilterSelected;
- (long long)unreadCountForCurrentFilterModeForChatController:(CKChatController *)arg1;
- (NSString *)navigationBarBackdropLayerGroupNameForChatController:(CKChatController *)arg1;
- (void)doneButtonPressedForChatController:(CKChatController *)arg1;
@end

