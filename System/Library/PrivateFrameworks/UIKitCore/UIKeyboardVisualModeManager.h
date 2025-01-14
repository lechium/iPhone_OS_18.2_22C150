//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIKeyboardVisualModeManagerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardVisualModeManager : NSObject
{
    int _lastVisualMode;	// 8 = 0x8
    id <UIKeyboardVisualModeManagerDelegate> _delegate;	// 16 = 0x10
}

+ (id)visualModeLog;	// IMP=0x0060000000b8aa56
+ (_Bool)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;	// IMP=0x0060000000b89d32
+ (_Bool)softwareKeyboardAllowedOnExternalScreen;	// IMP=0x0060000000b89c68
+ (_Bool)windowingSoftwareKeyboardAllowed;	// IMP=0x0060000000b89c50
- (void).cxx_destruct;	// IMP=0x0000000000b8aaeb
@property(nonatomic) int lastVisualMode; // @synthesize lastVisualMode=_lastVisualMode;
@property(nonatomic) __weak id <UIKeyboardVisualModeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)expectedInputModeIsSpecialized;	// IMP=0x0000000000b8a937
- (_Bool)textEntryFocusOnExternalDisplay;	// IMP=0x0000000000b8a818
- (_Bool)windowingModeEnabled;	// IMP=0x0000000000b8a6f9
- (void)keyboardCameraNotification:(id)arg1;	// IMP=0x0000000000b8a49f
- (void)enhancedWindowingModeDidChange:(id)arg1;	// IMP=0x0000000000b8a2ab
- (int)visualMode;	// IMP=0x0000000000b89e69
- (_Bool)shouldShowWithinAppWindow;	// IMP=0x0000000000b89bf1
- (_Bool)useVisualModeWindowed;	// IMP=0x0000000000b89b06
- (id)init;	// IMP=0x0000000000b89950

@end

