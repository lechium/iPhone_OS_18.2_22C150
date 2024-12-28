//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPConnectedEcosystemsChangedBulletin : HMFObject
{
    _Bool _timeSensitive;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
    NSString *_threadIdentifier;	// 32 = 0x20
    NSDate *_dateOfOccurrence;	// 40 = 0x28
    NSDictionary *_userInfo;	// 48 = 0x30
}

+ (id)localizedBodyForEcosystemName:(id)arg1 accessoryName:(id)arg2;	// IMP=0x006000000070bf23
+ (id)localizedBodyForAppleEcosystemWithAccessoryName:(id)arg1;	// IMP=0x006000000070bd6b
+ (id)localizedBodyForAccessoryName:(id)arg1;	// IMP=0x006000000070bbb3
+ (id)localizedTitle;	// IMP=0x006000000070bba2
- (void).cxx_destruct;	// IMP=0x000000000070bb3e
@property(readonly, getter=isTimeSensitive) _Bool timeSensitive; // @synthesize timeSensitive=_timeSensitive;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly, copy) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy) NSString *body; // @synthesize body=_body;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (id)attributeDescriptions;	// IMP=0x000000000070b81d
- (id)initWithAddedPairing:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000070b182
- (id)initWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 dateOfOccurrence:(id)arg4 userInfo:(id)arg5 isTimeSensitive:(_Bool)arg6;	// IMP=0x000000000070af90

@end
