//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSPasscodeViewController;

@protocol CSPasscodeViewControllerDelegate
- (_Bool)passcodeViewControllerShouldHideStatusBar:(CSPasscodeViewController *)arg1;
- (void)passcodeViewController:(CSPasscodeViewController *)arg1 didCompletePasscodeEntry:(_Bool)arg2;
- (void)passcodeViewControllerDidCancelPasscodeEntry:(CSPasscodeViewController *)arg1;
- (void)passcodeViewControllerDidBeginPasscodeEntry:(CSPasscodeViewController *)arg1;
@end

