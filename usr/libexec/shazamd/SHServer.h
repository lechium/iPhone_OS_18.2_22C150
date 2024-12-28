//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SHAPSConnection, SHMediaLibraryAccountListener;

@interface SHServer : NSObject
{
    NSArray *_listeners;	// 8 = 0x8
    SHAPSConnection *_apsConnection;	// 16 = 0x10
    SHMediaLibraryAccountListener *_accountListener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000634d
@property(readonly, nonatomic) SHMediaLibraryAccountListener *accountListener; // @synthesize accountListener=_accountListener;
@property(readonly, nonatomic) SHAPSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(readonly, nonatomic) NSArray *listeners; // @synthesize listeners=_listeners;
- (id)buildListenerForMachService:(Class)arg1;	// IMP=0x001000000000629b
- (id)buildListeners;	// IMP=0x001000000000608d
- (void)stop;	// IMP=0x0010000000005f2c
- (void)start;	// IMP=0x0010000000005d9d
- (id)init;	// IMP=0x0010000000005d05

@end
