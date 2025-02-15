//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVMobileChromelessVolumeControlsView;

@protocol AVMobileChromelessVolumeControlsViewDelegate <NSObject>

@optional
- (void)volumeControlsViewButtonWasTapped:(AVMobileChromelessVolumeControlsView *)arg1;
- (void)volumeControlsViewInteractionDidEnd:(AVMobileChromelessVolumeControlsView *)arg1;
- (void)volumeControlsView:(AVMobileChromelessVolumeControlsView *)arg1 volumeDidChangeTo:(double)arg2 withUpdateSource:(unsigned long long)arg3;
- (void)volumeControlsView:(AVMobileChromelessVolumeControlsView *)arg1 volumeDidChangeTo:(double)arg2;
- (void)volumeControlsViewInteractionDidBegin:(AVMobileChromelessVolumeControlsView *)arg1;
@end

