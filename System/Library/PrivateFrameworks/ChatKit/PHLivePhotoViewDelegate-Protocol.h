//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class PHLivePhotoView, UITouch;

@protocol PHLivePhotoViewDelegate <NSObject>

@optional
- (double)livePhotoView:(PHLivePhotoView *)arg1 extraMinimumTouchDurationForTouch:(UITouch *)arg2 withStyle:(long long)arg3;
- (void)livePhotoView:(PHLivePhotoView *)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(PHLivePhotoView *)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (_Bool)livePhotoView:(PHLivePhotoView *)arg1 canBeginPlaybackWithStyle:(long long)arg2;
@end

