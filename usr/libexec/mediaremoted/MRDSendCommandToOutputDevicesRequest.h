//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDSendCommandToOutputDevicesRequest : NSObject
{
}

+ (void)sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toEachEndpointContainingOutputDeviceUIDs:(id)arg3 timeout:(double)arg4 details:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x004000000018c5d2
+ (void)sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toNewEndpointContainingOutputDeviceUIDs:(id)arg3 playerPath:(id)arg4 timeout:(double)arg5 details:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000018c47f
- (_Bool)_doesRequestContainLocalDeviceUID:(id)arg1;	// IMP=0x0040000000190e7a
- (_Bool)_isRequestForCompanionOrigin:(id)arg1;	// IMP=0x0010000000190c7a
- (_Bool)_isRequestForLocalOrigin:(id)arg1;	// IMP=0x0010000000190b2f
- (_Bool)_isRequestForCurrentCongifuration:(id)arg1;	// IMP=0x00100000001909b3
- (id)_resolveOutputDevices:(id)arg1;	// IMP=0x001000000019075e
- (void)_sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toEachEndpointContainingOutputDeviceUIDs:(id)arg3 timeout:(double)arg4 details:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000018e64a
- (void)_sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toNewEndpointContainingOutputDeviceUIDs:(id)arg3 playerPath:(id)arg4 timeout:(double)arg5 details:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000018c70c

@end
