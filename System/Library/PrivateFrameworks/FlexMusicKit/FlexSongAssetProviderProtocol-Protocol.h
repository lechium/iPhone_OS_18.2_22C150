//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FlexSegment, NSString, NSURL;

@protocol FlexSongAssetProviderProtocol
- (void)setAudioFileExtension:(NSString *)arg1;
- (NSString *)audioFileExtension;
- (NSURL *)urlToAudioForSegment:(FlexSegment *)arg1;
- (NSURL *)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (NSURL *)urlToRoot;
@end
