//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/NSObject-Protocol.h>

@class NSString, OBPasscodeInputView;

@protocol OBPasscodeInputViewDelegate <NSObject>
- (void)passcodeInput:(OBPasscodeInputView *)arg1 enteredPasscode:(NSString *)arg2;
- (void)passcodeInput:(OBPasscodeInputView *)arg1 willChangeContents:(NSString *)arg2;
@end

