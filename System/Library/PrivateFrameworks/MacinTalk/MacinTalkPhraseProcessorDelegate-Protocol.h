//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MacinTalkPhraseProcessorDelegate

@optional
- (void)didFinishGeneratingSamples;
- (void)didGenerateSamplesForSync:(long long)arg1 message:(unsigned int)arg2;
- (void)didGenerateSamplesForPhoneme:(long long)arg1 phonemeOpcode:(short)arg2;
- (void)didGenerateSamplesForWord:(long long)arg1 stringPosition:(unsigned long long)arg2 length:(unsigned short)arg3;
@end

