//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface PKSetupAssistantRequirementsCheckResult : NSObject
{
    MISSING_TYPE *shouldRun;	// 8 = 0x8
    MISSING_TYPE *missingRequirements;	// 16 = 0x10
}

- (id)init;	// IMP=0x00000000001203e0
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) unsigned long long missingRequirements; // @synthesize missingRequirements;
@property(nonatomic, readonly) _Bool shouldRun; // @synthesize shouldRun;

@end
