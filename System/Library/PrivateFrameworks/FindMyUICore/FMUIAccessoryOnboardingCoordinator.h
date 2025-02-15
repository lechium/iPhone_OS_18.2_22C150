//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol FMUIAccessoryOnboardingCoordinatorDelegate;

@interface FMUIAccessoryOnboardingCoordinator : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *inlinePresenter;	// 16 = 0x10
    MISSING_TYPE *presenter;	// 24 = 0x18
    MISSING_TYPE *accessory;	// 32 = 0x20
    MISSING_TYPE *viewModel;	// 40 = 0x28
    MISSING_TYPE *state;	// 80 = 0x50
    MISSING_TYPE *pairingStatusTask;	// 88 = 0x58
    MISSING_TYPE *onboardingSession;	// 96 = 0x60
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000014fd20
- (id)init;	// IMP=0x000000000014fc60
- (void)start;	// IMP=0x000000000014e6e0
- (_Bool)shouldShowFMOnboardingFlow;	// IMP=0x000000000014d070
- (id)initWithPopoverPresenter:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000014cf10
- (id)initWithPresenter:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000014cb30
@property(nonatomic) __weak id <FMUIAccessoryOnboardingCoordinatorDelegate> delegate; // @synthesize delegate;

@end

