//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEODirectionsRequester;

@interface GEODirectionsServer : GEOServer
{
    GEODirectionsRequester *_serviceRequester;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x0020000000012396
- (void).cxx_destruct;	// IMP=0x0020000000008528
- (void)cancelWithRequest:(id)arg1;	// IMP=0x0010000000008427
- (void)startWithRequest:(id)arg1;	// IMP=0x00100000000080f0
- (id)serviceRequester;	// IMP=0x00100000000080af
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x00100000000123a3

@end
