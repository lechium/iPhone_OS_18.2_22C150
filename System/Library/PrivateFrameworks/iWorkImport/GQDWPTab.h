//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDWPTab : NSObject
{
    float mPosition;	// 8 = 0x8
    int mAlignment;	// 12 = 0xc
    struct __CFString *mLeader;	// 16 = 0x10
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0010000000022f0f
- (struct __CFString *)leader;	// IMP=0x0000000000023059
- (int)alignment;	// IMP=0x0000000000023050
- (float)position;	// IMP=0x0000000000023045
- (void)dealloc;	// IMP=0x0000000000023006
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x0000000000022f1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

