//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSDConversationLeaveContext : NSObject
{
    unsigned long long _leaveReason;	// 8 = 0x8
}

+ (id)greenTeaLeaveContext;	// IMP=0x00400000000d2b50
@property(nonatomic) unsigned long long leaveReason; // @synthesize leaveReason=_leaveReason;
- (id)description;	// IMP=0x00100000000d2b7e
- (id)initWithLeaveReason:(unsigned long long)arg1;	// IMP=0x00100000000d2b13

@end

