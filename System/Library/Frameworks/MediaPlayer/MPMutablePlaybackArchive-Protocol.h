//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPPlaybackArchiveDisplayProperties, NSData, NSString;

@protocol MPMutablePlaybackArchive <NSObject>
- (void)setFallbackStoreIdentifier:(NSString *)arg1;
- (void)setDisplayProperties:(MPPlaybackArchiveDisplayProperties *)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setSessionIdentifier:(NSString *)arg1 type:(NSString *)arg2 data:(NSData *)arg3;
- (void)setType:(long long)arg1;
@end

