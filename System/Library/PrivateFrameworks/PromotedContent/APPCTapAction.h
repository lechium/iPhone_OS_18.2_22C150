//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface APPCTapAction : NSObject
{
    MISSING_TYPE *actionType;	// 8 = 0x8
    MISSING_TYPE *confirmedClickInterval;	// 16 = 0x10
}

+ (id)actionFor:(id)arg1;	// IMP=0x0010000000054150
- (id)init;	// IMP=0x00000000000541e0
- (void)performActionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054130
- (id)initWithActionType:(long long)arg1 confirmedClickInterval:(double)arg2;	// IMP=0x00000000000540e0
@property(nonatomic, readonly) double confirmedClickInterval; // @synthesize confirmedClickInterval;
@property(nonatomic, readonly) long long actionType; // @synthesize actionType;

@end

