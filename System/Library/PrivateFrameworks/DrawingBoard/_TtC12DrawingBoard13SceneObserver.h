//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12DrawingBoard13SceneObserver : NSObject
{
    MISSING_TYPE *actionHandler;	// 8 = 0x8
    MISSING_TYPE *continuation;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000003fb0
- (id)init;	// IMP=0x0000000000003ef0
- (id)scene:(id)arg1 handleActions:(id)arg2;	// IMP=0x0000000000004a00
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x00000000000047d0
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x00000000000046d0
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;	// IMP=0x00000000000045d0
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;	// IMP=0x00000000000045b0
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;	// IMP=0x0000000000004590
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00000000000044a0
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000043c0
- (void)sceneDidActivate:(id)arg1;	// IMP=0x00000000000043a0
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x00000000000042e0

@end

