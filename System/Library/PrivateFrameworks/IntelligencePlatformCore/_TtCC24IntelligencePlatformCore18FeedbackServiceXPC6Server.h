//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC24IntelligencePlatformCore18FeedbackServiceXPC6Server : NSObject
{
    MISSING_TYPE *config;	// 0 = 0x0
    MISSING_TYPE *database;	// 12244752 = 0xbad710
    MISSING_TYPE *clientIdentifier;	// 8096 = 0x1fa0
}

- (void).cxx_destruct;	// IMP=0x00000000002c8c69
- (id)init;	// IMP=0x00000000002c8c56
- (void)logFeedback:(id)arg1 ofType:(id)arg2 ofVariant:(id)arg3 forEvent:(long long)arg4 withTimestamp:(id)arg5 shouldProcessImmediately:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000002c8a62

@end
