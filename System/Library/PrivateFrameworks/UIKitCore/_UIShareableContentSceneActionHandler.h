//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _UISceneBSActionHandler;

__attribute__((visibility("hidden")))
@interface _UIShareableContentSceneActionHandler : NSObject
{
    id <_UISceneBSActionHandler> _shareableContentActionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f6e48
@property(retain, nonatomic) id <_UISceneBSActionHandler> shareableContentActionHandler; // @synthesize shareableContentActionHandler=_shareableContentActionHandler;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x00000000003f6b2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

