//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UAUserActivityClientProcessesController;

@interface UALocalItemReceiver
{
    UAUserActivityClientProcessesController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004b540
@property(readonly, retain) UAUserActivityClientProcessesController *controller; // @synthesize controller=_controller;
- (id)statusString;	// IMP=0x001000000004b44b
- (id)receivedItems;	// IMP=0x001000000004b150
- (_Bool)receiving;	// IMP=0x001000000004b108
- (id)initWithManager:(id)arg1 controller:(id)arg2;	// IMP=0x001000000004b089

@end

