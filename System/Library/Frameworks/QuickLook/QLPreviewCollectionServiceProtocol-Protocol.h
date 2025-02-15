//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>

@class NSUUID;
@protocol QLNotificationCenterProtocol;

@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
- (void)invalidateServiceWithCompletionHandler:(void (^)(void))arg1;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(void (^)(void))arg1;
- (void)getNetworkObserverWithCompletionBlock:(void (^)(id <QLNetworkStateListener>))arg1;
- (void)setNotificationCenter:(id <QLNotificationCenterProtocol>)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(NSUUID *)arg1;
@end

