//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APXPCActivityCriteria, MISSING_TYPE, NSString;

@interface _TtC16promotedcontentd37ObservabilityXPCTimerActivityDelegate : NSObject
{
    MISSING_TYPE *taskID;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *currentScheduledTime;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000008410
- (id)init;	// IMP=0x0010000000008310
- (id)checkinWithCriteria:(id)arg1;	// IMP=0x00100000000082c0
- (void)terminateActivity:(id)arg1;	// IMP=0x00100000000080a0
- (void)deferActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007f40
- (_Bool)runActivity:(id)arg1;	// IMP=0x0010000000007ee0
@property(nonatomic, readonly) APXPCActivityCriteria *criteria;
@property(nonatomic, copy) NSString *taskID;

@end
