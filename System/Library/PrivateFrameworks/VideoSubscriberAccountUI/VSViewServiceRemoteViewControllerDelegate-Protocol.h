//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSError, NSString, NSUUID, VSViewServiceRemoteViewController, VSViewServiceResponse;

@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didSelectProviderWithIdentifier:(NSString *)arg2 vetoHandler:(void (^)(_Bool))arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didCancelRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didChooseAdditionalProvidersForRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)dismissViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
- (void)presentViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
@end

