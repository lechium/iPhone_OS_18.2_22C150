//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSContextRelativePoint, NSString;

@interface PUIDPointerRecenteringContext : NSObject
{
    int _restrictingToPID;	// 8 = 0x8
    BKSContextRelativePoint *_contextRelativePointerPosition;	// 16 = 0x10
    NSString *_displayUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000017c0c
@property(readonly, nonatomic) int restrictingToPID; // @synthesize restrictingToPID=_restrictingToPID;
@property(readonly, copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(readonly, nonatomic) BKSContextRelativePoint *contextRelativePointerPosition; // @synthesize contextRelativePointerPosition=_contextRelativePointerPosition;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017aac
- (unsigned long long)hash;	// IMP=0x0010000000017a66
- (id)initWithContextRelativePointerPosition:(id)arg1 displayUUID:(id)arg2 restrictingToPID:(int)arg3;	// IMP=0x00100000000179b1

@end

