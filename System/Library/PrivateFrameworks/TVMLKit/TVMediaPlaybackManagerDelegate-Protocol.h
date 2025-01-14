//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class TVMediaPlaybackManager;

@protocol TVMediaPlaybackManagerDelegate <NSObject>
- (void)mediaPlaybackManager:(TVMediaPlaybackManager *)arg1 shouldHideUI:(_Bool)arg2 animated:(_Bool)arg3 animations:(void (^)(void))arg4 completion:(void (^)(_Bool))arg5;

@optional
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(TVMediaPlaybackManager *)arg1;
- (_Bool)presentForegroundPlaybackControllerForMediaPlaybackManager:(TVMediaPlaybackManager *)arg1;
- (_Bool)mediaPlaybackManager:(TVMediaPlaybackManager *)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
@end

