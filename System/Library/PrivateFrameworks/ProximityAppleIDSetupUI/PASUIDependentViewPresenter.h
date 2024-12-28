//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUMessageSession, MISSING_TYPE;
@protocol PASUIDependentViewPresenterDelegate;

@interface PASUIDependentViewPresenter : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *flowController;	// 16 = 0x10
    MISSING_TYPE *navigationController;	// 32 = 0x20
    MISSING_TYPE *flowTimer;	// 72 = 0x48
    MISSING_TYPE *_messageSessionProvider;	// 80 = 0x50
    MISSING_TYPE *_authenticator;	// 88 = 0x58
    MISSING_TYPE *_deviceProvider;	// 96 = 0x60
    MISSING_TYPE *_targetAppleIDExchanger;	// 104 = 0x68
    MISSING_TYPE *_analyticsProvider;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_analytics;	// 120 = 0x78
    MISSING_TYPE *_featureFlagsProvider;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000000bb40
- (void)setTemplateMessageSession:(CUMessageSession *)arg1 completion:(void (^)(void))arg2;	// IMP=0x000000000000ded0
- (void)startFlowWithContainerViewController:(id)arg1;	// IMP=0x000000000000d4d0
- (void)startFlowWithNavigationController:(id)arg1;	// IMP=0x000000000000d350
- (void)activateWithTemplateMessageSession:(CUMessageSession *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x000000000000d080
- (void)activateWithTemplateMessageSession:(CUMessageSession *)arg1 completion:(void (^)(UIViewController *))arg2;	// IMP=0x000000000000c2e0
- (void)dealloc;	// IMP=0x000000000000bb20
- (id)init;	// IMP=0x000000000000b910
@property(nonatomic) _Bool shouldSignInForSelf;
@property(nonatomic) __weak id <PASUIDependentViewPresenterDelegate> delegate; // @synthesize delegate;
- (id)initWithParentViewController:(id)arg1;	// IMP=0x000000000001fe60

@end
