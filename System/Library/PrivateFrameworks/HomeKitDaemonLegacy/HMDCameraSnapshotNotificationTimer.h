//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFTimer.h>

@class NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotNotificationTimer : HMFTimer
{
    NSSet *_changedCharacteristics;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    NSArray *_postedBulletins;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a6e29d
@property(retain, nonatomic) NSArray *postedBulletins; // @synthesize postedBulletins=_postedBulletins;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSSet *changedCharacteristics; // @synthesize changedCharacteristics=_changedCharacteristics;
- (id)initWithCameraSessionID:(id)arg1 changedCharacteristics:(id)arg2 timeInterval:(double)arg3;	// IMP=0x0000000000a6e1a8

@end
