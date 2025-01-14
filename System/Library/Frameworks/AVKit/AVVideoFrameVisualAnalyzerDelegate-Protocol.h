//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVVideoFrameVisualAnalyzer, NSError, VKCImageAnalysis;

@protocol AVVideoFrameVisualAnalyzerDelegate <NSObject>
- (void)videoFrameVisualAnalyzerFailedAnalyzingVideoFrame:(AVVideoFrameVisualAnalyzer *)arg1 withError:(NSError *)arg2;
- (void)videoFrameVisualAnalyzerDidFinishAnalyzingVideoFrame:(AVVideoFrameVisualAnalyzer *)arg1 withAnalysis:(VKCImageAnalysis *)arg2;
@end

