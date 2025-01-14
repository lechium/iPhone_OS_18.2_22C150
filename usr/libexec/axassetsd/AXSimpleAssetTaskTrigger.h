//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAssetsXPCActivity, NSDictionary, NSString;

@interface AXSimpleAssetTaskTrigger : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_launchActivityId;	// 16 = 0x10
    AXAssetsXPCActivity *_launchActivity;	// 24 = 0x18
    NSString *_notificationName;	// 32 = 0x20
    NSDictionary *_arguments;	// 40 = 0x28
}

+ (id)withAnonymousInvokation:(id)arg1;	// IMP=0x002000000000d992
+ (id)withFirstUnlockType;	// IMP=0x001000000000d95a
+ (id)withFirstBootType;	// IMP=0x001000000000d922
+ (id)withNotificationName:(id)arg1;	// IMP=0x001000000000d8b6
+ (id)withLaunchActivityId:(id)arg1;	// IMP=0x001000000000d84d
- (void).cxx_destruct;	// IMP=0x002000000000db49
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain, nonatomic) AXAssetsXPCActivity *launchActivity; // @synthesize launchActivity=_launchActivity;
@property(retain, nonatomic) NSString *launchActivityId; // @synthesize launchActivityId=_launchActivityId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x001000000000dab7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000d9fe

@end

