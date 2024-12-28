//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVRemoteUI/NSObject-Protocol.h>

@class NSString, RTIDataPayload, TVRAlertController;

@protocol TVRAlertControllerDelegate <NSObject>
- (void)alertControllerCancelled:(TVRAlertController *)arg1;
- (void)alertControllerHitKeyboardReturnKey:(TVRAlertController *)arg1;
- (void)alertControllerReleasedDictationButton:(TVRAlertController *)arg1;
- (void)alertControllerPressedDictationButton:(TVRAlertController *)arg1;
- (void)alertController:(TVRAlertController *)arg1 generatedTextInputPayload:(RTIDataPayload *)arg2;
- (void)alertController:(TVRAlertController *)arg1 enteredText:(NSString *)arg2;
@end
