//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNNavigationServiceDirectionsRequestTicket;

@interface NanoRoutePlanningRouteRequestState
{
    MNNavigationServiceDirectionsRequestTicket *_ticket;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000012bc4
- (void)stop;	// IMP=0x0010000000012bb2
- (void)cancelRequest;	// IMP=0x0010000000012b0c
- (void)_processIncomingRoutes:(id)arg1 error:(id)arg2 directionsError:(id)arg3 fromTicket:(id)arg4;	// IMP=0x00100000000124cc
- (void)start;	// IMP=0x0010000000011e0b
- (void)dealloc;	// IMP=0x0010000000011dac

@end
