//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSString;

@protocol CSSecondPassProgressDelegate <NSObject>
- (void)secondPassDidStopForClient:(unsigned long long)arg1 deviceId:(NSString *)arg2;
- (void)secondPassDidStartForClient:(unsigned long long)arg1 deviceId:(NSString *)arg2 withFirstPassEstimate:(double)arg3;
@end
