//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDAirPlayManager : NSObject
{
    _Bool mDeviceIDIsMAC;	// 8 = 0x8
    NSString *;	// 16 = 0x10
    NSString *_currentlyPickedDestinationDeviceID;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x0020000000012468
- (void).cxx_destruct;	// IMP=0x0020000000013bf2
@property(copy, nonatomic) NSString *currentlyPickedDestinationDeviceID; // @synthesize currentlyPickedDestinationDeviceID=_currentlyPickedDestinationDeviceID;
@property(copy, nonatomic) NSString *currentlyPickedDestinationName; // @synthesize currentlyPickedDestinationName=_currentlyPickedDestinationName;
- (id)_discoverDeviceWithDestinationName:(id)arg1 scanWaitTime:(double)arg2 sessionType:(unsigned long long)arg3;	// IMP=0x001000000001376a
- (id)_discoverDeviceWithDestinationDeviceID:(id)arg1 scanWaitTime:(double)arg2 error:(id *)arg3;	// IMP=0x00100000000133d8
- (id)_messageForAirPlayPromptOnDisplayNamed:(id)arg1;	// IMP=0x00100000000130cc
- (void)_promptUserToMirrorOnDisplayNamed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e83
- (_Bool)_setOutputDevices:(id)arg1 forSessionType:(unsigned long long)arg2 password:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000012c1a
- (void *)_outputContextForSessionType:(unsigned long long)arg1;	// IMP=0x0010000000012bee
- (_Bool)stopAirPlaySessionOfType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000012bd1
- (_Bool)startAirPlaySessionWithDestinationName:(id)arg1 destinationDeviceID:(id)arg2 password:(id)arg3 scanWaitTime:(double)arg4 sessionType:(unsigned long long)arg5 force:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0010000000012531
- (id)initPrivate;	// IMP=0x00100000000124cd

@end

