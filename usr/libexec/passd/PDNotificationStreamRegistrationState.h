//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PDNotificationStreamRegistrationState : NSObject
{
    NSMutableDictionary *_notificationNameMapping;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000032181c
- (void)setNotificationNames:(id)arg1 forStream:(long long)arg2;	// IMP=0x0010000000321730
- (id)notificationNamesForStream:(long long)arg1;	// IMP=0x00100000003216c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000321661
- (id)init;	// IMP=0x001000000032160b

@end

