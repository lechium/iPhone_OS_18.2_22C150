//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSManualDuckingHandler : NSObject
{
}

- (void)duckAudioDeviceWithDeviceID:(unsigned int)arg1 duckedLevel:(float)arg2 rampDuration:(float)arg3;	// IMP=0x00400000000fef8d
- (void)duckDefaultOutputAudioDeviceWithDuckedLevel:(float)arg1 rampDuration:(float)arg2;	// IMP=0x00100000000fef87
- (void)resetDucking;	// IMP=0x00100000000fef81
- (id)init;	// IMP=0x00100000000fef73

@end

