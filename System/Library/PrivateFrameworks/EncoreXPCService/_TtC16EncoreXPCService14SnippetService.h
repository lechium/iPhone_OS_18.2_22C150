//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC16EncoreXPCService14SnippetService
{
    MISSING_TYPE *serviceName;	// 0 = 0x0
    MISSING_TYPE *eventHandler;	// 0 = 0x0
    MISSING_TYPE *encore;	// 0 = 0x0
    MISSING_TYPE *connection;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000000ce10
- (id)init;	// IMP=0x000000000000cd60
- (void)echoWithEvent:(id)arg1;	// IMP=0x000000000000cd10
- (void)publishWithEvent:(id)arg1;	// IMP=0x000000000000cab0
- (void)handleEventWithEvent:(id)arg1;	// IMP=0x000000000000ca40
- (void)subscribeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c660
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000c4e0

@end

