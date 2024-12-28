//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBRingerNoticeUICoordinating <NSObject>
@property(readonly, nonatomic, getter=isActivatedForPreviewing) _Bool activatedForPreviewing;
@property(readonly, nonatomic, getter=isPresented) _Bool presented;
@property(nonatomic) float volume;
@property(nonatomic, getter=isRingerSilent) _Bool ringerSilent;
- (void)buttonReleased;
- (void)nudgeUp:(_Bool)arg1;
- (void)setVolume:(float)arg1 animated:(_Bool)arg2 forKeyPress:(_Bool)arg3;
- (void)presentForMuteChange:(_Bool)arg1;
@end
