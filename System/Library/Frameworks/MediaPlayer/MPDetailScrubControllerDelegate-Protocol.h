//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPDetailScrubController;

@protocol MPDetailScrubControllerDelegate <NSObject>

@optional
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidEndScrubbing:(MPDetailScrubController *)arg1;
- (void)detailScrubControllerDidBeginScrubbing:(MPDetailScrubController *)arg1;
@end

