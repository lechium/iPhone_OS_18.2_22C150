//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18SharingViewService29AuthenticateAccountsPresenter : NSObject
{
    MISSING_TYPE *authViewModel;	// 8 = 0x8
    MISSING_TYPE *authViewModelDidUpdate;	// 64 = 0x40
    MISSING_TYPE *interactor;	// 80 = 0x50
    MISSING_TYPE *router;	// 96 = 0x60
    MISSING_TYPE *remoteViewControllerProxy;	// 112 = 0x70
    MISSING_TYPE *currentState;	// 120 = 0x78
    MISSING_TYPE *homeButtonPressedWhileLocked;	// 121 = 0x79
    MISSING_TYPE *inProgressCard;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000e2150
- (id)init;	// IMP=0x00100000000e5250
- (void)dealloc;	// IMP=0x00100000000e2080
- (void)handleDeviceSetupWithNotification:(id)arg1;	// IMP=0x00100000000e5770
- (void)proxCardFlowDidDismiss;	// IMP=0x00100000000e5b70

@end

