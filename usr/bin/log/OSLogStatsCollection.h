//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, OSLogStatsUUIDArray;

@interface OSLogStatsCollection
{
    struct timeval _start;	// 200 = 0xc8
    MISSING_TYPE *_end;	// 216 = 0xd8
    _Bool _started;	// 232 = 0xe8
    OSLogStatsUUIDArray *_processes;	// 240 = 0xf0
    OSLogStatsUUIDArray *_senders;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x002000000000600a
@property(retain, nonatomic) OSLogStatsUUIDArray *senders; // @synthesize senders=_senders;
@property(retain, nonatomic) OSLogStatsUUIDArray *processes; // @synthesize processes=_processes;
@property(readonly, nonatomic) struct timeval *endTime;
@property(readonly, nonatomic) struct timeval *startTime;
- (void)processCategoryAndSubsystem:(id)arg1 forProcess:(_Bool)arg2;	// IMP=0x0010000000005e7a
- (void)processEvent:(id)arg1;	// IMP=0x0010000000005cbc
- (id)init;	// IMP=0x0010000000005c39

@end
