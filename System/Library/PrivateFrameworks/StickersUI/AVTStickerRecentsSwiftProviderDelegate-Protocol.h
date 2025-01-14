//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StickersUI/NSObject-Protocol.h>

@class NSString, NSURL, NSUUID, UIImage;

@protocol AVTStickerRecentsSwiftProviderDelegate <NSObject>
- (void)avtStickerRecentStoreDidChange;
- (void)avtStickerRecentRenderedWithIdentifier:(NSUUID *)arg1 localizedDescription:(NSString *)arg2 image:(UIImage *)arg3 url:(NSURL *)arg4 avatarRecordIdentifier:(NSString *)arg5 stickerConfigurationIdentifier:(NSString *)arg6;
@end

