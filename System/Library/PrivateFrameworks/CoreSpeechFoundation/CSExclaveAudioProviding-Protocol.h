//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/NSObject-Protocol.h>

@protocol CSExclaveAudioProvidingDelegate;

@protocol CSExclaveAudioProviding <NSObject>
- (void)requestHistoricalAudioBufferFor:(unsigned long long)arg1 startSample:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 hostTime:(unsigned long long)arg4;
- (_Bool)fetchAndStoreAudioBuffer;
- (unsigned long long)stopSensor;
- (unsigned long long)startSensor;
- (_Bool)prepare;
- (void)setDelegate:(id <CSExclaveAudioProvidingDelegate>)arg1;
@end
