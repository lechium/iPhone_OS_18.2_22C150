//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRUListeningModeController, NSArray, NSString;

@protocol MRUListeningModeControllerDelegate <NSObject>
- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangePrimaryListeningMode:(NSString *)arg2;
- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangeAvailablePrimaryListeningMode:(NSArray *)arg2;

@optional
- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangeSecondaryListeningMode:(NSString *)arg2;
- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangeAvailableSecondaryListeningModes:(NSArray *)arg2;
@end
