//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface OSLogStatsImage
{
    unsigned char _uuid[16];	// 200 = 0xc8
    NSMutableDictionary *_offsets;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00200000000059f7
@property(retain, nonatomic) NSMutableDictionary *offsets; // @synthesize offsets=_offsets;
- (id)statsForOffset:(unsigned long long)arg1;	// IMP=0x0010000000005906
@property(readonly, nonatomic) const char *UUID;
- (id)initWithUUID:(const char *)arg1;	// IMP=0x00100000000058a4

@end
