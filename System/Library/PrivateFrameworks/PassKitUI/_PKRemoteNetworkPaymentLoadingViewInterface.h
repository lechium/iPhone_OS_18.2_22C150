//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;
@protocol PKPaymentAuthorizationServiceProtocol;

@interface _PKRemoteNetworkPaymentLoadingViewInterface : NSObject
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 16 = 0x10
    MISSING_TYPE *hostingControllerContext;	// 24 = 0x18
    MISSING_TYPE *loadingViewModel;	// 32 = 0x20
    MISSING_TYPE *loadingView;	// 40 = 0x28
    MISSING_TYPE *loadingViewSerialQueue;	// 256 = 0x100
    MISSING_TYPE *internalService;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000006ea2b0
- (id)init;	// IMP=0x00000000006ea250
- (void)didAppear;	// IMP=0x00000000006e92a0
@property(nonatomic, readonly) id <PKPaymentAuthorizationServiceProtocol> serviceDelegate;
@property(nonatomic, readonly) UIViewController *primaryViewController;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000006e8510

@end
