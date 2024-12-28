//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSObject, NSString, SKRemoteEngagementRemoteViewController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SKEngagementPresenterProtocol;

__attribute__((visibility("hidden")))
@interface SKRemoteEngagementPresenterViewController : UIViewController
{
    id <SKEngagementPresenterProtocol> _delegate;	// 8 = 0x8
    SKRemoteEngagementRemoteViewController *_remoteViewController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_engagementPresentationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000013b6d
@property(readonly) NSObject<OS_dispatch_semaphore> *remoteViewControllerSemaphore; // @synthesize remoteViewControllerSemaphore=_remoteViewControllerSemaphore;
@property(readonly) NSObject<OS_dispatch_queue> *engagementPresentationQueue; // @synthesize engagementPresentationQueue=_engagementPresentationQueue;
@property(retain) SKRemoteEngagementRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <SKEngagementPresenterProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteView;	// IMP=0x00000000000139f4
- (void)_loadRemoteViewController;	// IMP=0x000000000001377a
- (void)presentEngagementRequestData:(id)arg1 clientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012fb4
- (void)viewDidLoad;	// IMP=0x0000000000012f73
- (id)init;	// IMP=0x0000000000012ef3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
