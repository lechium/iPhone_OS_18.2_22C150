//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneComponent.h>

@class NSString;
@protocol _UISceneMaskingDelegate;

__attribute__((visibility("hidden")))
@interface _UISceneMaskingHostComponent : FBSSceneComponent
{
    id <_UISceneMaskingDelegate> _sceneMaskingHost;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001a623b9
@property(nonatomic) __weak id <_UISceneMaskingDelegate> _sceneMaskingHost; // @synthesize _sceneMaskingHost;
- (void)_handleMaskingAction:(id)arg1;	// IMP=0x0000000001a6203c
- (id)handlePrivateActions:(id)arg1;	// IMP=0x0000000001a61e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
