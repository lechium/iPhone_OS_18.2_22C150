//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class MISSING_TYPE;

@interface _TtC18CameraOverlayAngel20OverlaySceneDelegate : UIResponder
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *overlayController;	// 16 = 0x10
    MISSING_TYPE *clientMonitor;	// 24 = 0x18
    MISSING_TYPE *sceneTeardownTimer;	// 32 = 0x20
    MISSING_TYPE *clientAuditToken;	// 40 = 0x28
    MISSING_TYPE *connection;	// 48 = 0x30
    MISSING_TYPE *lastUsedControl;	// 56 = 0x38
    MISSING_TYPE *defaultSliderType;	// 64 = 0x40
    MISSING_TYPE *isFocusLockContactRecognizerInstalled;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_focusLockContactRecognizer;	// 80 = 0x50
    MISSING_TYPE *quietUITimer;	// 88 = 0x58
    MISSING_TYPE *quietUIEndTimer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x004000000000d710
- (id)init;	// IMP=0x001000000000d6a0
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(_Bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;	// IMP=0x001000000000d550
- (void)systemOverlayViewControllerCancelledHidingSlider:(id)arg1;	// IMP=0x001000000000d320
- (void)systemOverlayViewControllerWillHideSlider:(id)arg1;	// IMP=0x001000000000d2d0
- (void)systemOverlayViewController:(id)arg1 didChangeActiveControl:(id)arg2;	// IMP=0x001000000000d130
- (void)systemOverlayViewController:(id)arg1 menuDidScrollToControlAtIndex:(long long)arg2;	// IMP=0x001000000000d0e0
- (void)systemOverlayViewController:(id)arg1 didUpdateControl:(id)arg2;	// IMP=0x001000000000d070
- (void)systemOverlayViewController:(id)arg1 didChangeSliderVisible:(_Bool)arg2;	// IMP=0x001000000000c720
- (void)clientConnection:(id)arg1 didApplyControlUpdate:(id)arg2;	// IMP=0x001000000000c290
- (void)clientConnectionDidChangeControls:(id)arg1;	// IMP=0x001000000000c240
- (void)clientConnection:(id)arg1 didChangeStatus:(unsigned long long)arg2;	// IMP=0x001000000000c1f0
- (void)serverLostConnectionFromProcessID:(long long)arg1;	// IMP=0x001000000000c1e0
- (void)serverReceivedConnection:(id)arg1 fromProcessID:(long long)arg2;	// IMP=0x001000000000ff20
- (void)serverActivatedConnection:(id)arg1;	// IMP=0x001000000000c190
- (void)clientMonitor:(id)arg1 didUpdateWithAuditToken:(id)arg2;	// IMP=0x001000000000a840
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000009f60
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000009ca0

@end

