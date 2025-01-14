//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServicesUI/NSObject-Protocol.h>

@class SUKeybagInterface;

@protocol SUKeybagInterfaceObserver <NSObject>

@optional
- (void)keybagInterfacePasscodeDidChange:(SUKeybagInterface *)arg1;
- (void)keybagInterface:(SUKeybagInterface *)arg1 passcodeLockedStateDidChange:(_Bool)arg2;
- (void)keybagInterface:(SUKeybagInterface *)arg1 hasPasscodeSetDidChange:(_Bool)arg2;
@end

