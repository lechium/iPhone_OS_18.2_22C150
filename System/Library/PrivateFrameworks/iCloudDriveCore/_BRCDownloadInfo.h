//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _BRCDownloadInfo
{
    long long previousCompletedUnitCount;	// 56 = 0x38
    long long previousTotalUnitCount;	// 64 = 0x40
    NSMutableDictionary *_resumeUnitCounts;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000019dbc8
@property(readonly, nonatomic) NSMutableDictionary *resumeUnitCounts; // @synthesize resumeUnitCounts=_resumeUnitCounts;
@property(nonatomic) long long previousTotalUnitCount; // @synthesize previousTotalUnitCount;
@property(nonatomic) long long previousCompletedUnitCount; // @synthesize previousCompletedUnitCount;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;	// IMP=0x000000000019daa3
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;	// IMP=0x000000000019d7e2
- (id)init;	// IMP=0x000000000019d733

@end

