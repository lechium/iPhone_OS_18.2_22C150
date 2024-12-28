//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBulletinRegistrationInfo : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
    long long _serviceInstanceID;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b3cbac
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) long long serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)description;	// IMP=0x0000000000b3ca51

@end
