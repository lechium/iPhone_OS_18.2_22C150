//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/NSObject-Protocol.h>

@class CSBeepCanceller, NSData;

@protocol CSBeepCancellerDelegate <NSObject>
- (void)beepCancellerDidCancelSamples:(CSBeepCanceller *)arg1 buffer:(NSData *)arg2 timestamp:(unsigned long long)arg3;
@end
