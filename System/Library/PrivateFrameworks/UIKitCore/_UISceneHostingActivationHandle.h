//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UISceneHostingActivating;

__attribute__((visibility("hidden")))
@interface _UISceneHostingActivationHandle : NSObject
{
    id <_UISceneHostingActivating> _activationTarget;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000037e874
- (void)invalidate;	// IMP=0x000000000037e864
- (void)deactivate:(CDUnknownBlockType)arg1;	// IMP=0x000000000037e714
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x000000000037e5c4
- (_Bool)isActive;	// IMP=0x000000000037e505
@property(readonly, nonatomic, getter=isHandleValid) _Bool handleValid;
- (void)dealloc;	// IMP=0x000000000037e42f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
