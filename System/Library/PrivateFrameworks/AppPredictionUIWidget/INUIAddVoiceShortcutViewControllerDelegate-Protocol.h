//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class INUIAddVoiceShortcutViewController, INVoiceShortcut, NSError;

@protocol INUIAddVoiceShortcutViewControllerDelegate <NSObject>
- (void)addVoiceShortcutViewControllerDidCancel:(INUIAddVoiceShortcutViewController *)arg1;
- (void)addVoiceShortcutViewController:(INUIAddVoiceShortcutViewController *)arg1 didFinishWithVoiceShortcut:(INVoiceShortcut *)arg2 error:(NSError *)arg3;
@end

