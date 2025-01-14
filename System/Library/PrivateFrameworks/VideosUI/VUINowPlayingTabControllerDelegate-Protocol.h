//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSString, VUIMediaInfo;

@protocol VUINowPlayingTabControllerDelegate <NSObject>

@optional
- (void)nowPlayingTabControllerUserDidSelectElement:(_Bool)arg1 disappearanceReason:(unsigned long long)arg2;
- (void)nowPlayingTabControllerMediaInfoDidChangeTo:(VUIMediaInfo *)arg1 canPlay:(_Bool)arg2 wasAutoPlayed:(_Bool)arg3;
- (void)nowPlayingTabControllerUserDidInteract:(NSString *)arg1;
@end

