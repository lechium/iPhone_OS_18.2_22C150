//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController
{
    _Bool _hasRetriedOnce;	// 8 = 0x8
    _Bool _hasRequestedPresentation;	// 9 = 0x9
    id <VSViewServiceHostViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_requestsByID;	// 24 = 0x18
    VSOptional *_currentRequest;	// 32 = 0x20
    VSViewServiceRemoteViewController *_remoteViewController;	// 40 = 0x28
    VSViewControllerFactory *_viewControllerFactory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000046a2
@property(retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) _Bool hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property(nonatomic) _Bool hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property(retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property(nonatomic) __weak id <VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteViewControllerAsChildViewController;	// IMP=0x0000000000004459
- (void)_removeRemoteViewControllerAsChildViewController;	// IMP=0x000000000000438f
- (void)_connectToViewServiceForRequest:(id)arg1;	// IMP=0x0000000000003e05
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003db6
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;	// IMP=0x0000000000003d61
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;	// IMP=0x0000000000003d0c
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000000003ca8
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x000000000000391d
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;	// IMP=0x00000000000038b9
- (void)dismissViewServiceRemoteViewController:(id)arg1;	// IMP=0x0000000000003870
- (void)presentViewServiceRemoteViewController:(id)arg1;	// IMP=0x000000000000381b
- (_Bool)isModalInPresentation;	// IMP=0x0000000000003813
- (long long)modalPresentationStyle;	// IMP=0x0000000000003808
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x0000000000003640
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;	// IMP=0x00000000000035d1
- (void)_dismissViewServiceHostViewController;	// IMP=0x0000000000003585
- (void)_presentViewServiceHostViewController;	// IMP=0x0000000000003539
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;	// IMP=0x0000000000003442
- (void)_didCancelRequest:(id)arg1;	// IMP=0x000000000000334b
- (void)_request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000003202
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;	// IMP=0x0000000000003094
- (void)_didCompleteRequest:(id)arg1;	// IMP=0x0000000000002e0c
- (id)_requestForID:(id)arg1;	// IMP=0x0000000000002d5f
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000002bcd
- (void)dealloc;	// IMP=0x0000000000002b97
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000002aab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

