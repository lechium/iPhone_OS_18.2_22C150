//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKSenderPositionKey : NSObject
{
    unsigned long long _senderID;	// 8 = 0x8
    long long _positionID;	// 16 = 0x10
}

- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x002000000003a0bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003a018
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003a003

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
