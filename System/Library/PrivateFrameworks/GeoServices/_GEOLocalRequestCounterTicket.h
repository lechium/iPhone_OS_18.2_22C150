//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORequestCounterTicketBase.h"

@class GEORequestCounterPersistence;

__attribute__((visibility("hidden")))
@interface _GEOLocalRequestCounterTicket : GEORequestCounterTicketBase
{
    GEORequestCounterPersistence *_persistence;	// 8 = 0x8
}

+ (id)requestCounterTicketForType:(CDStruct_026435ec)arg1 auditToken:(id)arg2 traits:(id)arg3 persistence:(id)arg4;	// IMP=0x006000000104447f
- (void).cxx_destruct;	// IMP=0x00000000010447f7
- (void)_incrementForApp:(id)arg1 offlineCohortId:(id)arg2 requestMode:(int)arg3 startTime:(id)arg4 endTime:(id)arg5 requestType:(CDStruct_026435ec)arg6 result:(unsigned char)arg7 error:(id)arg8 xmitBytes:(long long)arg9 recvBytes:(long long)arg10 usedInterfaces:(unsigned long long)arg11;	// IMP=0x0000000001044504

@end
