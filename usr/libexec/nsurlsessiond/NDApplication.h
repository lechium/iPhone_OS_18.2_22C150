//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (id)fileProviderWithIdentifer:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x004000000004f081
+ (id)cloudContainerWithIdentifier:(id)arg1;	// IMP=0x001000000004ef52
+ (id)chronoKitExtensionWithIdentifier:(id)arg1;	// IMP=0x001000000004ee23
+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x001000000004ed96
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000004ec67
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x001000000004eb2e
+ (void)initialize;	// IMP=0x001000000004eb0a
- (void).cxx_destruct;	// IMP=0x002000000004e714
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x001000000004e62c
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x001000000004e624
- (void)invokeSelectorForAllObservers:(SEL)arg1 pid:(int)arg2;	// IMP=0x001000000004e5a3
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x001000000004e52b
- (void)removeObserver:(id)arg1;	// IMP=0x001000000004e47a
- (void)addObserver:(id)arg1;	// IMP=0x001000000004e3ef
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x001000000004e3e7
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x001000000004e3df
- (_Bool)canBeSuspended;	// IMP=0x001000000004e3d7
- (_Bool)isForeground;	// IMP=0x001000000004e3cf
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x001000000004e3c7
- (_Bool)shouldElevateDiscretionaryPriority;	// IMP=0x001000000004e3bf
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000004e22a
- (_Bool)maySupportWakesLater;	// IMP=0x001000000004e203
- (_Bool)supportsWakes;	// IMP=0x001000000004e194
- (_Bool)usesContainerManagerForAVAsset;	// IMP=0x001000000004e18c
- (id)containerURL;	// IMP=0x001000000004e184
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000004e0c2

@end

