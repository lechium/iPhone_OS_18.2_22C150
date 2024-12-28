//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _EARAudioAnalytics : NSObject
{
    NSDictionary *_speechRecognitionFeatures;	// 8 = 0x8
    NSDictionary *_acousticFeatures;	// 16 = 0x10
    double _snr;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3134
@property(readonly, nonatomic) double snr; // @synthesize snr=_snr;
@property(readonly, copy, nonatomic) NSDictionary *acousticFeatures; // @synthesize acousticFeatures=_acousticFeatures;
@property(readonly, copy, nonatomic) NSDictionary *speechRecognitionFeatures; // @synthesize speechRecognitionFeatures=_speechRecognitionFeatures;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d310a
- (id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 snr:(double)arg3;	// IMP=0x00000000000d3017

@end
