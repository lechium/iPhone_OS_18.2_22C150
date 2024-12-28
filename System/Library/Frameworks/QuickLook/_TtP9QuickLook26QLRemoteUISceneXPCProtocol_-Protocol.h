//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>

@protocol QLNotificationCenterProtocol;

@protocol _TtP9QuickLook26QLRemoteUISceneXPCProtocol_ <QLPreviewCollectionProtocol>
- (void)preparePreviewCollectionForInvalidationWithCompletionHandlerWithCompletionHandler:(void (^)(void))arg1;
- (void)getNetworkObserverWithCompletionBlock:(void (^)(id <QLNetworkStateListener>))arg1;
- (void)setNotificationCenter:(id <QLNotificationCenterProtocol>)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandlerWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)crashWithReply:(void (^)(void))arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1 completionHandler:(void (^)(void))arg2;
@end
