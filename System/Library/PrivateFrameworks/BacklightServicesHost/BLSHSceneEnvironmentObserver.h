//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BLSHSceneEnvironmentObserving;

__attribute__((visibility("hidden")))
@interface BLSHSceneEnvironmentObserver : NSObject
{
    id <BLSHSceneEnvironmentObserving> _observer;	// 8 = 0x8
}

+ (id)observerWithObserver:(id)arg1;	// IMP=0x001000000000b1e2
- (void).cxx_destruct;	// IMP=0x000000000000b462
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x000000000000b385
@property(readonly, copy) NSString *description;
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000000b22b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
