//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARPhoneticMatchData : NSObject
{
    shared_ptr_5cf7ddf4 _dataFeed;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000030acc
- (void).cxx_destruct;	// IMP=0x0000000000030abe
@property(readonly, nonatomic) shared_ptr_5cf7ddf4 dataFeed; // @synthesize dataFeed=_dataFeed;
- (int)getLimit;	// IMP=0x0000000000030a8e
- (_Bool)roomForMoreData;	// IMP=0x0000000000030a7d
- (_Bool)appendData:(id)arg1 prior:(float)arg2;	// IMP=0x0000000000030802
- (void)addOsym;	// IMP=0x00000000000307f4
- (void)applyRegexEnumerations;	// IMP=0x00000000000307e6
- (void)powerScalePriors;	// IMP=0x00000000000307d8
- (void)expDecayPriors;	// IMP=0x00000000000307ca
- (void)normalizePriors;	// IMP=0x00000000000307bc
- (void)sortItemsByPriorAsc;	// IMP=0x00000000000307ae
- (void)sortItemsByPriorDesc;	// IMP=0x00000000000307a0
- (void)writeTsv:(id)arg1;	// IMP=0x0000000000030704
- (id)initWithFeedType:(long long)arg1 jsonConfigFile:(id)arg2;	// IMP=0x00000000000302a7
- (int)convertFeedType:(long long)arg1;	// IMP=0x0000000000030292

@end
