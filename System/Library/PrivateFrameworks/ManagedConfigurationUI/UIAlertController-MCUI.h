//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@interface UIAlertController (MCUI)
+ (void)MCUIShowAlertForError:(id)arg1 fromViewController:(id)arg2 suggestedTitle:(id)arg3 suggestedMessage:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x005000000002c95a
+ (void)MCUIShowRebootAlertFromViewController:(id)arg1;	// IMP=0x005000000002c600
+ (void)MCUIShowWatchUnavailableAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x005000000002c5ec
- (void)MCUIShowFromController:(id)arg1;	// IMP=0x001000000002c431
- (void)MCUIAddCancelActionWithTitle:(id)arg1;	// IMP=0x001000000002c3d6
- (void)MCUIAddActionWithTitle:(id)arg1 style:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002c26c
@end

