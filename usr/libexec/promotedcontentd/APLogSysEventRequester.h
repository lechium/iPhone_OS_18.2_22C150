//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface APLogSysEventRequester
{
    int _eventType;	// 8 = 0x8
}

@property int eventType; // @synthesize eventType=_eventType;
- (void)makeDelayedRequest:(double)arg1 requestSentHandler:(CDUnknownBlockType)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000dda21
- (id)protoBuffer;	// IMP=0x00100000000dd869
- (_Bool)isAllowedEmptyResponse;	// IMP=0x00100000000dd861
- (Class)responseClass;	// IMP=0x00100000000dd850

@end

