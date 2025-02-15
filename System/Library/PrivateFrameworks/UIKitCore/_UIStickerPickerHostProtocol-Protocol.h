//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, _UISticker;

@protocol _UIStickerPickerHostProtocol <NSObject>
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)stageSticker:(_UISticker *)arg1;
- (void)stageStickerWithIdentifier:(NSString *)arg1 representations:(NSArray *)arg2 name:(NSString *)arg3 externalURI:(NSString *)arg4 accessibilityLabel:(NSString *)arg5;
- (void)dismissCard;
- (void)presentCard;
- (void)stickerPickerCardDidLoad;
@end

