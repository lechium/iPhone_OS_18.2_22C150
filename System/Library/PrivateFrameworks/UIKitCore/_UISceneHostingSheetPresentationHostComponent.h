//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneComponent.h>

@class NSString, UIViewController, _UISheetPresentationControllerConfiguration;

__attribute__((visibility("hidden")))
@interface _UISceneHostingSheetPresentationHostComponent : FBSSceneComponent
{
    UIViewController *_targetViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000014b04bc
@property(nonatomic, setter=_setTargetViewController:) __weak UIViewController *_targetViewController; // @synthesize _targetViewController;
@property(nonatomic, setter=_setViewClipsToBounds:) _Bool _viewClipsToBounds;
@property(retain, nonatomic, setter=_setSheetConfiguration:) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x00000000014afee6
- (id)scene:(id)arg1 handleActions:(id)arg2;	// IMP=0x00000000014afc82
- (id)currentPresentationController;	// IMP=0x00000000014afbd9

// Remaining properties
@property(readonly, nonatomic) _Bool _allowsConnection;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
